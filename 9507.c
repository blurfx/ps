#include <stdio.h>
long long r[68]={0};
long long f(n){
	if(n<2) return 1;
	if(n==2) return 2;
	if(n==3) return 4;
	for(int i=4;i<=n;i++)
		r[i]=r[i-1]+r[i-2]+r[i-3]+r[i-4];
	return r[n];
}
int main() {
	int t,n;
	r[0]=1;r[1]=1;
	r[2]=2;
	r[3]=4;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%lld\n",f(n));
	}
	return 0;
}
