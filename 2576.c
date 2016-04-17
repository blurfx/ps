#include <stdio.h>
int main(void) {
	int i,n,m=999,s=0;
	for(i=0;i<7;i++){
		scanf("%d",&n);
		if(n%2){
			s+=n;
			m=(m>n)?n:m;
		}
	}
	if(m==999) printf("-1");
	else printf("%d\n%d",s,m);
	return 0;
}
