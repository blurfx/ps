#include <stdio.h>

int main(void) {
	int h1,h2,m1,m2,s1,s2,rh,rm,rs;char c;
	scanf("%d%c%d%c%d",&h1,&c,&m1,&c,&s1);
	scanf("%d%c%d%c%d",&h2,&c,&m2,&c,&s2);
	rh = h2-h1;
	rm = m2-m1;
	rs = s2-s1;
	if(rs<0){
		rs+=60;
		rm--;
	}
	if(rm<0){
		rm+=60;
		rh--;
	}
	if(rh<0) rh+=24;
	
	printf("%02d:%02d:%02d",rh,rm,rs);
	return 0;
}
