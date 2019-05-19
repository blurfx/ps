#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isConsistence = 1;

class Trie {
	struct Trie *node[10];
	bool initialized[10];
	int key;
	bool isMatched;

public:
	Trie(int key) {
		this->key = key;
		for (int i = 0; i < 10; ++i) this->initialized[i] = false;
		this->isMatched = 0;
	}

	~Trie() {
		for (int i = 0; i < 10; ++i) {
			if (this->initialized[i]) {
				delete this->node[i];
			}
		}
	}

	void find(string &str, int index) {
		if (str.size() == index) {
			return;
		}

		int cur = str[index] - '0';

		if (!this->initialized[cur]) {
			return;
		}

		if (str.size() > index && this->isMatched && this->key != -1) {
			isConsistence = 0;
		}

		this->node[cur]->find(str, index + 1);
	}

	void insert(string &str, int index) {
		int cur = str[index] - '0';
		if (!this->initialized[cur]) {
			this->node[cur] = new Trie(cur);
			this->initialized[cur] = true;
		}
		if (str.size() == index + 1) {
			this->node[cur]->isMatched = 1;
			return;
		}
		this->node[cur]->insert(str, index + 1);
	}
};

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		isConsistence = 1;
		Trie* trie = new Trie(-1);
		cin >> n;		
		vector<string> v(n);
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
			trie->insert(v[i], 0);
		}
		sort(v.begin(), v.end());
		for (string& s : v) {
			trie->find(s, 0);
		}
		delete trie;
		cout << (isConsistence ? "YES" : "NO") << '\n';
	}
}