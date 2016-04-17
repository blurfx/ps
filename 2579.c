#include <stdio.h>
int max(int x,int y){return (x>y)?x:y;}
int main(void) {
	int i,j,step,stair[301],score[301][2] = {0};
	scanf("%d",&step);
	for(i=1;i<=step;i++)
		scanf("%d",&stair[i]);
	score[1][0] = score[1][1] = stair[1];
	for(i=2;i<=step;i++){
		score[i][0] += score[i-1][1] + stair[i];
		score[i][1] += max(score[i-2][0],score[i-2][1]) + stair[i];
	}
	printf("%d",max(score[step][0],score[step][1]));
	return 0;
}
