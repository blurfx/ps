#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	int t,i;
	cin >> t;
	while(t--){
		int f=0,push=0;
		vector<char> v;
		string s;
		cin >> s;
		for(i=0;i<s.size();i++){
			if(s[i] == '('){
				v.push_back(s[i]);
				push++;
			} else {
				if(v.size() == 0) f=1;
				else v.pop_back();
				push--;
			}
		}
		
		if(!f&&!push) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
