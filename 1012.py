import sys
import operator

sys.setrecursionlimit(100000)
read = lambda: sys.stdin.readline().strip()
rel_position = [(-1, 0), (1, 0), (0, -1), (0, 1)]

class DFS:

    def __init__(self, graph):
        self.graph = graph
        self.visit = {}

    def run(self, y, x):
        current = (y, x)
        if self.visit.get(current) is not None:
            return False

        self.visit[current] = True

        if self.graph.get(current) is not None:
            global rel_position
            for i in range(4):
                next = tuple(map(operator.add, current, rel_position[i]))
                if next in self.graph:
                    self.run(*next)
        
        return True


T = int(read())
for _ in range(T):
    graph = {}
    M, N, K = list(map(int, read().split()))
    for __ in range(K):
        y, x = list(map(int, read().split()))
        graph[(y, x)] = True

    dfs = DFS(graph)
    answer = 0
    for key in graph.keys():
        if dfs.run(*key):
            answer += 1


    print(answer)