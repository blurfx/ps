#include <stdio.h>
int dp[1001][3];
int min(int x, int y){ return (x>y)?y:x; }
int main(void) {
	int i,j,t,r[3];
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d%d%d",&r[0],&r[1],&r[2]);
		for(j=0;j<3;j++)
			dp[i][j] = min(dp[i-1][(j+1)%3],dp[i-1][(j+2)%3])+r[j];
	}
	printf("%d",min(min(dp[t][0],dp[t][1]),dp[t][2]));
	return 0;
}
