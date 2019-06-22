import sys
import heapq

read = lambda: sys.stdin.readline().strip()

V, E = map(int, read().split())
K = int(read())

graph = [[] for _ in range(V + 1)]
visit = [False for _ in range(V + 1)]
dist = [float('inf') for _ in range(V + 1)]
heap = []

# input
for _ in range(E):
    u, v, w = map(int, read().split())
    graph[u].append([v, w])

# dijkstra
heapq.heappush(heap, [0, K])
dist[K] = 0

while len(heap) > 0:
    while len(heap) > 0:
        _, v = heapq.heappop(heap)
        if not visit[v]:
            break
    visit[v] = True

    for nv, nw in graph[v]:
        if dist[nv] > dist[v] + nw:
            dist[nv] = dist[v] + nw
            heapq.heappush(heap, [dist[nv], nv])

# output
for d in dist[1:]:
    if d == float('inf'):
        print('INF')
    else:
        print(d)