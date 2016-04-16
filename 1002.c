#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
		int x1,y1,r1,x2,y2,r2,dist,r;
		scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
		dist = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
		
		if(!dist){
			puts((r1==r2)?"-1":"0");
		}else {
			if(dist == (r2-r1)*(r2-r1) || dist == (r2+r1)*(r2+r1))
				puts("1");
			else if(dist < (r2-r1)*(r2-r1) || dist > (r2+r1)*(r2+r1))
				puts("0");
			else
				puts("2");
		}
	}
	return 0;
}
