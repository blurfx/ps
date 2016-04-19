#include <stdio.h>
int x(int x,int y){return x>y?x:y;}
int main() {
	int a,n,i,j,t,dp[501][501] = {0};
	scanf("%d",&t);
	dp[0][0] = a = n;
	for(i=0;i<t;i++){
		for(j=1;j<=i+1;j++){
			scanf("%d",&n);
			dp[i][j] += x(dp[i-1][j],dp[i-1][j-1])+n;
			a=x(a,dp[i][j]);
		}
	}
	printf("%d",a);
	return 0;
}
