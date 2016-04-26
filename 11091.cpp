#include<iostream>
#include<string>
#include<cctype>
#include<climits>
using namespace std;
int main(){
	int t,i;
	cin>>t;
	while(t--){
		int a[26]={0},f=0;
		string s,o="missing ";
		cin.clear();
		getline(cin,s);
		if(s.empty()){t++;continue;}
		for(i=0;i<s.size();i++){
			char c=tolower(s[i]);
			if(c>='a'&&c<='z')
				a[c-'a']++;
		}
		for(i=0;i<26;i++){
			if(!a[i]) {
				f=1;
				o+='a'+i;
			}
		}
		if(f) cout << o << '\n';
		else cout <<"pangram\n";
	}
}
