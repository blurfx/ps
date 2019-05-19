is_consistence = True

class Trie:
    def __init__(self, key):
        self.node = {}
        self.count = {}
        self.key = key
        self.is_matched = False

    def find(self, key):
        if key != '' and self.is_matched:
            global is_consistence
            is_consistence = False
            return

        if self.node.get(key[:1]) is None:
            return None
        else:
            return self.node[key[:1]].find(key[1:])

    def insert(self, key):
        if key == '':
            self.is_matched = True
            return

        if self.node.get(key[:1]) is None:
            self.node[key[:1]] = Trie(key[:1])
        self.node[key[:1]].insert(key[1:])


t = int(input())

for _ in range(t):
    is_consistence = True
    arr = []
    root = Trie(None)
    n = int(input())
    for i in range(n):
        arr.append(input())
        root.insert(arr[-1])
    arr.sort()
    for i in arr:
        root.find(i)
    print('YES' if is_consistence else 'NO')