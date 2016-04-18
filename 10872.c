#include <stdio.h>
int f(int x){if(x<=1) return 1; return x*f(x-1);}
int main(void) {
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}
