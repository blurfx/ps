#include <stdio.h>
int r[1001]={0};
int tiling(int n){
	if(n<2) return 1;
	if(r[n]) return r[n];
	r[n] = (tiling(n-1) + tiling(n-2))%10007;
	return r[n];
}

int main(void) {
	int n;
	scanf("%d",&n);
	printf("%d",tiling(n));
	return 0;
}
