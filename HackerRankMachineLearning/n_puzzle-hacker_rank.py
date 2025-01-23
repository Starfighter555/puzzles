import heapq
import copy

def manhattan_distance(state, goal, k):
    distance = 0
    for i in range(k):
        for j in range(k):
            value = state[i][j]
            if value != 0: 
                goal_x, goal_y = divmod(goal.index(value), k)
                distance += abs(i - goal_x) + abs(j - goal_y)
    return distance

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

def read_input():
    k = int(input().strip()) 
    tiles = [int(input().strip()) for _ in range(k * k)]  
    start = [tiles[i * k:(i + 1) * k] for i in range(k)] 
    return k, start

def generate_goal(k):
    goal = [list(range(i * k, (i + 1) * k)) for i in range(k)]
    return goal

def is_solvable(grid, k):
    flat_grid = sum(grid, [])
    inversions = 0
    for i in range(len(flat_grid)):
        for j in range(i + 1, len(flat_grid)):
            if flat_grid[i] > flat_grid[j] > 0:
                inversions += 1
    if k % 2 == 1:
        return inversions % 2 == 0
    else: 
        row = next(i for i, row in enumerate(grid) if 0 in row)
        return (inversions + row) % 2 == 0


def main():
    k, start = read_input()  
    goal = generate_goal(k) 

    if not is_solvable(start, k):
        print(-1)
        return

    moves, path = solve_puzzle(start, goal, k)

    print(moves)

    if moves > 0 and path:
        for step in path:
            print(step)


  

if __name__ == '__main__':      
    main()