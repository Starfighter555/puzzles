import heapq
import copy
import matplotlib.pyplot as plt
import matplotlib.animation as animation

# Funktion zur Berechnung der Manhattan-Distanz
def manhattan_distance(state, goal, k):
    distance = 0
    for i in range(k):
        for j in range(k):
            value = state[i][j]
            if value != 0: 
                goal_x, goal_y = divmod(goal.index(value), k)
                distance += abs(i - goal_x) + abs(j - goal_y)
    return distance

# Funktion zur Generierung von Nachbarn
def get_neighbors(state, k):
    moves = []
    for i in range(k):
        for j in range(k):
            if state[i][j] == 0: 
                directions = [
                    (i - 1, j, "UP"), (i + 1, j, "DOWN"),
                    (i, j - 1, "LEFT"), (i, j + 1, "RIGHT")
                ]
                for x, y, move in directions:
                    if 0 <= x < k and 0 <= y < k:
                        new_state = copy.deepcopy(state)
                        new_state[i][j], new_state[x][y] = new_state[x][y], new_state[i][j]
                        moves.append((new_state, move))
                return moves
    return moves

# A*-Algorithmus zum Lösen des Puzzles
def solve_puzzle(start, goal, k):
    goal_flat = sum(goal, []) 
    visited = set()
    pq = []
    heapq.heappush(pq, (0, 0, start, [])) 

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

# Funktion zur Darstellung des Puzzles
def draw_puzzle(state, ax, k):
    ax.clear()
    ax.set_xticks([])
    ax.set_yticks([])
    for i in range(k):
        for j in range(k):
            value = state[i][j]
            if value != 0:  # Leeres Feld nicht anzeigen
                # Hier wird die korrekte Position oben links berechnet
                ax.text(j + 0.5, i + 0.5, str(value),
                        ha='center', va='center', fontsize=18, color='white',
                        bbox=dict(boxstyle='square', facecolor='blue'))
    ax.set_xlim(0, k)
    ax.set_ylim(k, 0)  # Umkehren der y-Achse für korrekte Orientierung


# Animation-Funktion
def animate_solution(start, path, k):
    fig, ax = plt.subplots(figsize=(6, 6))
    state = [row[:] for row in start]  # Kopiere den Startzustand
    draw_puzzle(state, ax, k)  # Zeichne den Startzustand

    def update(step):
        nonlocal state
        move = path[step]
        # Finde die Position der leeren Zelle (0)
        empty_x, empty_y = [(i, row.index(0)) for i, row in enumerate(state) if 0 in row][0]

        if move == "UP" and empty_x > 0:  # Überprüfe, ob UP möglich ist
            state[empty_x][empty_y], state[empty_x - 1][empty_y] = state[empty_x - 1][empty_y], state[empty_x][empty_y]
        elif move == "DOWN" and empty_x < k - 1:  # Überprüfe, ob DOWN möglich ist
            state[empty_x][empty_y], state[empty_x + 1][empty_y] = state[empty_x + 1][empty_y], state[empty_x][empty_y]
        elif move == "LEFT" and empty_y > 0:  # Überprüfe, ob LEFT möglich ist
            state[empty_x][empty_y], state[empty_x][empty_y - 1] = state[empty_x][empty_y - 1], state[empty_x][empty_y]
        elif move == "RIGHT" and empty_y < k - 1:  # Überprüfe, ob RIGHT möglich ist
            state[empty_x][empty_y], state[empty_x][empty_y + 1] = state[empty_x][empty_y + 1], state[empty_x][empty_y]

        draw_puzzle(state, ax, k)  # Zeichne den neuen Zustand

    ani = animation.FuncAnimation(fig, update, frames=len(path), repeat=False, interval=500)
    plt.show()

# Input im HackerRank-Format lesen
def read_input():
    k = int(input().strip()) 
    tiles = [int(input().strip()) for _ in range(k * k)]  
    start = [tiles[i * k:(i + 1) * k] for i in range(k)] 
    return k, start

# Zielzustand generieren
def generate_goal(k):
    goal = [list(range(i * k, (i + 1) * k)) for i in range(k)]
    return goal

# Hauptprogramm
def main():
    k, start = read_input()  # Eingabe lesen
    goal = generate_goal(k)  # Zielzustand generieren
    moves, path = solve_puzzle(start, goal, k)  # Puzzle lösen
    
    print(moves)  # Anzahl der Züge ausgeben
    for step in path:
        print(step)  # Bewegungen ausgeben

    input("Drücke ENTER, um die Animation zu starten...")  # Warte auf Benutzereingabe
    if moves > 0:
        animate_solution(start, path, k)


if __name__ == '__main__':      
    main()
