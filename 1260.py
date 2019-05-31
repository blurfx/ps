import sys
from queue import Queue

sys.setrecursionlimit(100000)
read = lambda: sys.stdin.readline().strip()

class DFS:
    visit = {}
    history = []

    def __init__(self, graph):
        self.graph = graph

    def run(self, current):
        if self.visit.get(current) is not None:
            return
        self.visit[current] = True

        self.history.append(current)

        if self.graph.get(current) is None:
            return

        for next in sorted(self.graph[current].keys()):
            self.run(next)
        
        return self.history

class BFS:
    visit = {}
    history = []

    def __init__(self, graph):
        self.graph = graph

    def run(self, start):
        q = Queue()
        q.put(start)
        self.history.append(start)
        self.visit[start] = True

        while not q.empty():
            current = q.get()
            if self.graph.get(current) is None:
                return
            for next in sorted(self.graph[current].keys()):
                if self.visit.get(next) is None:
                    self.visit[next] = True
                    q.put(next)
                    self.history.append(next)
        return self.history


graph = {}
N, M, V = list(map(int, read().split()))

for _ in range(M):
    u, v = list(map(int, read().split()))

    if graph.get(u) is None:
        graph[u] = {}
    
    if graph.get(v) is None:
        graph[v] = {}
    
    graph[u][v] = graph[v][u] = True

dfs = DFS(graph)
bfs = BFS(graph)

dfs_answer = dfs.run(V)
if dfs_answer is None:
    dfs_answer = [V]
dfs_answer = list(map(str, dfs_answer))

bfs_answer = bfs.run(V)
if bfs_answer is None:
    bfs_answer = [V]
bfs_answer = list(map(str, bfs_answer))

print(' '.join(dfs_answer))
print(' '.join(bfs_answer))