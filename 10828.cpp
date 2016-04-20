#include <iostream>
#include <string>
using namespace std;

int main() {
	int t,n,k[10001],c=-1;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		if(s=="push"){
			int n;
			cin>>n;
			k[++c]=n;
		}
		else if(s=="top"){
            if(c>-1)
			    cout<<k[c]<<'\n';
            else
                cout<<"-1\n";
        }
		else if(s=="size")
			cout<<(c+1)<<'\n';
		else if(s=="empty")
			cout<<((c==-1)?1:0)<<'\n';
		else if(s=="pop"){
			if(c>-1){
				cout<<k[c]<<'\n';
				k[c--]=0;
			}else
				cout<<"-1\n";
		}
	}
	return 0;
}
