#include <stdio.h>
int main(void) {
	int t,n,min=1000001,max=-1000001;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		min = n<min?n:min;
		max = n>max?n:max;
	}
	printf("%d %d",min,max);
	return 0;
}
