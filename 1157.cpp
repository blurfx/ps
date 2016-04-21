#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
int main() {
	vector<int> v;
	int z[27]={0},i,m=26;
	char c;
	string s;
	cin>>s;
	for(i=0;i<s.size();i++)
		z[tolower(s[i])-'a']++;
	
	for(i=0;i<26;i++){
		v.push_back(z[i]);
		m=z[i]>z[m]?i:m;
	}
	sort(v.begin(),v.end());
	c=m+65;
	if(v[25]==v[24]) cout <<'?';
	else cout << c;
	return 0;
}
