import heapq
import copy

# Funktion zur Berechnung der Manhattan-Distanz
def manhattan_distance(state, goal, k):
    distance = 0
    for i in range(k):
        for j in range(k):
            value = state[i][j]
            if value != 0:  # Skip empty cell
                goal_x, goal_y = divmod(goal.index(value), k)
                distance += abs(i - goal_x) + abs(j - goal_y)
    return distance

# Funktion zur Generierung von Nachbarn
def get_neighbors(state, k):
    moves = []
    for i in range(k):
        for j in range(k):
            if state[i][j] == 0:  # Finde die leere Zelle
                # Potenzielle Bewegungen
                directions = [
                    (i - 1, j, "UP"), (i + 1, j, "DOWN"),
                    (i, j - 1, "LEFT"), (i, j + 1, "RIGHT")
                ]
                for x, y, move in directions:
                    if 0 <= x < k and 0 <= y < k:
                        # Erzeuge neuen Zustand
                        new_state = copy.deepcopy(state)
                        new_state[i][j], new_state[x][y] = new_state[x][y], new_state[i][j]
                        moves.append((new_state, move))
                return moves
    return moves

# A* Algorithmus
def solve_puzzle(start, goal, k):
    goal_flat = sum(goal, [])  # Ziel als flache Liste
    visited = set()
    pq = []
    heapq.heappush(pq, (0, 0, start, []))  # (f(n), g(n), state, path)

    while pq:
        _, cost, current, path = heapq.heappop(pq)
        current_flat = sum(current, [])
        
        if tuple(current_flat) in visited:
            continue
        visited.add(tuple(current_flat))

        if current_flat == goal_flat:
            return cost, path
        
        for neighbor, move in get_neighbors(current, k):
            neighbor_flat = sum(neighbor, [])
            if tuple(neighbor_flat) not in visited:
                h = manhattan_distance(neighbor, goal_flat, k)
                heapq.heappush(pq, (cost + 1 + h, cost + 1, neighbor, path + [move]))

    return -1, []

# Input im HackerRank-Format
def read_input():
    k = int(input().strip())  # Größe des Grids
    tiles = [int(input().strip()) for _ in range(k * k)]  # Zahlen auf den Tiles
    start = [tiles[i * k:(i + 1) * k] for i in range(k)]  # 2D-Grid erstellen
    return k, start

# Zielzustand generieren
def generate_goal(k):
    goal = [list(range(i * k, (i + 1) * k)) for i in range(k)]
    return goal


# Hauptfunktion
def main():
    k, start = read_input()
    goal = generate_goal(k)
    moves, path = solve_puzzle(start, goal, k)
    print(moves)  # Anzahl der Bewegungen
    for step in path:
        print(step)  # Bewegungsrichtung

if __name__ == '__main__':      
    main()