#include <stdio.h>
int main(void) {
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		int r[101]={0,},c=0,s;
		scanf("%d",&s);
		for(i=1;i<=s;i++){
			for(j=i;j<=s;j+=i)
				r[j]++;
		}
		for(i=1;i<=s;i++) if(r[i]%2==1) c++;
		printf("%d\n",c);
	}
	return 0;
}
