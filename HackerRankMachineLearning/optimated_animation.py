import heapq
import copy
import matplotlib.pyplot as plt
import matplotlib.animation as animation
import time

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

# Iterative Deepening A* (IDA*) Algorithmus
def ida_star(start, goal, k):
    def manhattan(state, goal):
        distance = 0
        for i in range(k):
            for j in range(k):
                value = state[i][j]
                if value != 0:
                    goal_x, goal_y = divmod(goal.index(value), k)
                    distance += abs(i - goal_x) + abs(j - goal_y)
        return distance

    def search(path, g, bound):
        current = path[-1]
        f = g + manhattan(current, goal)
        if f > bound:
            return f
        if sum(current, []) == goal_flat:
            return True
        min_cost = float('inf')
        for neighbor, move in get_neighbors(current, k):
            if neighbor not in path:
                path.append(neighbor)
                t = search(path, g + 1, bound)
                if t is True:
                    return True
                if t < min_cost:
                    min_cost = t
                path.pop()
        return min_cost

    goal_flat = sum(goal, [])
    bound = manhattan(start, goal)
    path = [start]
    while True:
        t = search(path, 0, bound)
        if t is True:
            return len(path) - 1, path
        if t == float('inf'):
            return -1, []
        bound = t

# Funktion zur Darstellung des Puzzles
def draw_puzzle(state, ax, k):
    ax.clear()
    ax.set_xticks([])
    ax.set_yticks([])
    for i in range(k):
        for j in range(k):
            value = state[i][j]
            if value != 0:  # Leeres Feld nicht anzeigen
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
        empty_x, empty_y = [(i, row.index(0)) for i, row in enumerate(state) if 0 in row][0]

        if move == "UP" and empty_x > 0:
            state[empty_x][empty_y], state[empty_x - 1][empty_y] = state[empty_x - 1][empty_y], state[empty_x][empty_y]
        elif move == "DOWN" and empty_x < k - 1:
            state[empty_x][empty_y], state[empty_x + 1][empty_y] = state[empty_x + 1][empty_y], state[empty_x][empty_y]
        elif move == "LEFT" and empty_y > 0:
            state[empty_x][empty_y], state[empty_x][empty_y - 1] = state[empty_x][empty_y - 1], state[empty_x][empty_y]
        elif move == "RIGHT" and empty_y < k - 1:
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
    k, start = read_input()
    goal = generate_goal(k)

    start_time = time.time()
    moves, path = ida_star(start, goal, k)  # Verwende IDA*
    end_time = time.time()

    print(f"Lösungszeit: {end_time - start_time:.2f} Sekunden")
    print(moves)
    for step in path:
        print(step)

    if moves > 0:
        input("Drücke ENTER, um die Animation zu starten...")
        animate_solution(start, path, k)

if __name__ == '__main__':
    main()
