#include <stdio.h>
int isInCircle(int x,int y, int Cx, int Cy, int Cr){
    return (x-Cx)*(x-Cx) +(y-Cy)*(y-Cy)<Cr*Cr;
}
int main(){
	int t,i;
	scanf("%d",&t);
	while(t--){
		int x1,y1,x2,y2,n,cx,cy,r,c=0;
		scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&n);
		for(i=0;i<n;i++){
			scanf("%d%d%d",&cx,&cy,&r);
			c += isInCircle(x1,y1,cx,cy,r) ^ isInCircle(x2,y2,cx,cy,r);
		}
		printf("%d\n",c);
	}
}
