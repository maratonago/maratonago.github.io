#!/usr/bin/env python3
# Paulo Cezar, Maratona 2016, Ladrilhos

h, l = map(int,input().split())
grid = [[int(x) for x in input().split()] for i in range(h)]
seen = [[0 for j in range(l)] for i in range(h)]

res = h * l

for i in range(h):
    for j in range(l):
        if seen[i][j] != 0:
            continue
        q = [(i,j)]
        seen[i][j] = 1
        cnt = 0;
        while q:
            u, v = q.pop(0)
            cnt += 1
            for dr in [(-1,0),(+1,0),(0,-1),(0,+1)]:
                uu, vv = u + dr[0], v + dr[1]
                if (0 <= uu and uu < h and
                    0 <= vv and vv < l and
                    seen[uu][vv] == 0 and
                    grid[u][v] == grid[uu][vv]):
                        seen[uu][vv] = 1
                        q.append((uu,vv))
        res = min(res, cnt)

print(res)
