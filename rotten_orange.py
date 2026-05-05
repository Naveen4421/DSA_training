from collections import deque

def rotten(grid):
    rl = len(grid)
    cl = len(grid[0])
    p_r = deque()
    fresh = time = 0

    for i in range(rl):
        for j in range(cl):
            if grid[i][j] == 2:
                p_r.append((i, j))
            elif grid[i][j] == 1:
                fresh += 1

    d = [(0, -1), (0, 1), (-1, 0), (1, 0)]

    while p_r:
        for _ in range(len(p_r)):
            r, c = p_r.popleft()
            for dr, dc in d:
                nr = r + dr
                nc = c + dc
                if 0 <= nr < rl and 0 <= nc < cl and grid[nr][nc] == 1:
                    grid[nr][nc] = 2
                    p_r.append((nr, nc))
                    fresh -= 1A
        if p_r:
            time += 1

    return -1 if fresh > 0 else time


# Test
grid = [[2, 1, 1],
        [1, 1, 0],
        [0, 1, 1]]
print(rotten(grid))  # Output: 4
