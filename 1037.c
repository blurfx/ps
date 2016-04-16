#include <stdio.h>
#include <stdlib.h>
long long qs(void *a,void *b)
{
  return(*(long long*)a-*(long long*)b);
}

int main(void) {
	long long i,c,a[50],max=-1,min=1000000;
	
	scanf("%lld",&c);
	for(i=0;i<c;i++)scanf("%lld",&a[i]);
	
	qsort(a,c,sizeof(long long),qs);
	printf("%lld",a[0]*a[c-1]);
	return 0;
}
