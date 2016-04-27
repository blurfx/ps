#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
void multiply(int x){
	int i=0;
	for(i=0;i<v.size();i++) 
		v[i] *= x;
	for(i=0;i<v.size();i++){
		if(v[i] > 10){
			int z = v[i];
			v[i] = z%10;
			if(i+1>=v.size()) v.push_back(0);
			v[i+1] += z/10;
		}
	}
}
int main(){
	int n,i,s=0;
	cin>>n;
	if(!n) cout<<'1';
	else{
		v.push_back(1);
		for(i=1;i<=n;i++) multiply(i);
		for(i=0;i<v.size();i++) {
			if(v[i]) break;
			s++;
		}
		cout<<s;
	}
}