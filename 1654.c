#include <stdio.h>
#define max(a,b) a>b?a:b
int main(){
	long long n,m[10000]={0},k,d,i,left=1,right=-1,mid,ans;
	scanf("%lld%lld",&n,&k);
	for(i=0;i<n;i++){
		scanf("%lld",&m[i]);
		right=max(right,m[i]);
	}
	while(left<=right){
		mid=(left+right)/2;
		d=0;
		for(i=0;i<n;i++) d+=m[i]/mid;
		if(d >= k){
			ans = mid;
			left = mid+1;
		}else{
			right = mid-1;
		}
	}
	printf("%lld",ans);
}
