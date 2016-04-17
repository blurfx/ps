#include <stdio.h>
#include <stdlib.h>
int cmp(void*a,void*b){return *(int*)a-*(int*)b;}
int main(void) {
	int i,j,k, a[9],sum=0,f=0;
	for(i=0;i<9;i++){
		scanf("%d",&a[i]);
		sum += a[i];
	}
	qsort(a,9,sizeof(int),cmp);
	for(i=0;i<8;i++){
		for(j=i+1;j<9;j++){
			if(sum-a[i]-a[j]==100){
				f=1;
				break;
			}
		}
		if(f) break;
	}
	for(k=0;k<9;k++){
		if(k==i||k==j) continue;
		printf("%d\n",a[k]);
	}
	return 0;
}
