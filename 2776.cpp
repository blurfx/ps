#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		vector<int> seen;
		int n,m,i,x,left,right,mid,found;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&x);
			seen.push_back(x);
		}
		sort(seen.begin(),seen.end());
		
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&x);
			found = 0;
			left = 0;
			right = n-1;
			while(left <= right){
				mid = (left+right)/2;
				if(x==seen[mid]){
					found = 1;
					break;
				}else if(x < seen[mid]) right = mid-1;
				else left = mid + 1;
			}
			printf("%d\n",found);
		}
	}
	return 0;
}
