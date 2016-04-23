#include <stdio.h>
int main(void) {
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=i;j<n-1;j++) putchar(' ');
		for(j=0;j<=i;j++){
			putchar('*');
			if(j!=i) putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}
