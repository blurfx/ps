#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s,r;
	int i,isJ=0,isC=0;
	cin>>s;
	for(i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z') isJ=1;
		if(s[i]=='_') isC=1;
		if(!((s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z') || s[i]=='_')){
			cout << "Error!";
			return 0;
		}
	}
	if(isJ&&isC){
		cout << "Error!";
		return 0;
	}
	if(!isJ){
		if(s[0] == '_' || s[s.size()-1] == '_'){
			cout << "Error!";
			return 0;
		}
	}
	if(isJ && !(s[0]>='a'&&s[0]<='z')){
		cout << "Error!";
		return 0;
	}
	for(i=0;i<s.size();i++){
		if(isJ){
			if(s[i]>='A'&&s[i]<='Z'){
				r+='_';
				r+=tolower(s[i]);
			}else
				r+=s[i];
		}else {
			if(((s[i]>='a' && s[i]<='z') || s[i]=='_') && (s[i]=='_' && s[i+1]=='_')){
				cout << "Error!";
				return 0;
			}
			if(s[i]!='_')
				r+=s[i];
			else {
				r+= toupper(s[i+1]);
				i++;
			}
		}
	}
	cout<<r;
	
	return 0;
}
