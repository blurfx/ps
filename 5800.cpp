#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t,n,i,j,s;
	cin>>t;
	for(i=1;i<=t;i++){
		vector<int> v, x;
		cin>>s;
		for(j=0;j<s;j++){
			cin>>n;
			v.push_back(n);
		}
		sort(v.begin(),v.end());
		for(j=s-1;j>0;j--)
			x.push_back(v[j]-v[j-1]);
		sort(x.begin(),x.end());
		cout << "Class " << i << '\n';
		cout << "Max " << v[s-1] << ", Min " << v[0] << ", Largest gap " << x.back() << '\n';
	}
}
