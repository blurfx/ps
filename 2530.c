#include <stdio.h>
int main() {
	int s,t[3];
	scanf("%d%d%d%d",&t[0],&t[1],&t[2],&s);
	t[0] += s/3600;
	s%=3600;
	t[1] += s/60;
	t[2] += (s%=60);
	t[1] += t[2]/60;
	t[2]%=60;
	t[0]+=t[1]/60;
	t[1]%=60;
	t[0]%=24;
	printf("%d %d %d",t[0],t[1],t[2]);
	return 0;
}
