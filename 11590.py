import sys

read = lambda: sys.stdin.readline().strip()

class Trie:
    def __init__(self, key):
        self.node = {}
        self.key = key

    def insert(self, ch):
        if self.node.get(ch) is None:
            self.node[ch] = Trie(0)
        return self.node[ch]
        
N = int(read())
pre_trie = Trie(0)
suf_trie = Trie(0)
candidates = {}

for i in range(1, N + 1):
    s = read()

    local_answer = 0
    pre = pre_trie
    suf = suf_trie

    for j in range(len(s)):
        pre = pre.insert(s[j])
        suf = suf.insert(s[len(s) - j - 1])

        if pre.key == suf.key:
            if candidates.get(pre.key) is None:
                candidates[pre.key] = 0
            local_answer = max(local_answer, candidates[pre.key] + 1)

    pre.key = suf.key = i
    candidates[i] = local_answer
print(max(candidates.values()))