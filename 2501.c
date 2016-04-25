#include<stdio.h>
int main(){
  int i,c=1,n,k,m[10001]={0};
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
		if(n%i==0)
		  m[c++]=i;
	printf("%d",m[k]);
}
