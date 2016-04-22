#include <stdio.h>
int main() {
	int i,t;double x,y,d,c,r;
	scanf("%d",&t);
	while(t--){
		scanf("%lf%lf",&x,&y);
		r=c=1;d=y-x;
		while(y>d) r*= (y--/c++);
		printf("%.0lf\n",r);
	}
	return 0;
}
