#include<stdio.h>
int main(){
	int x,i,ls=3,rs=2,l=1,r=1,lreverse=0,rreverse=0,lrepeat=0, rrepeat=1,lskip=0,rskip=0;
	scanf("%d",&x);

	for(i=1;i<=x;i++){
		if(i==x) printf("%d/",l);
		if(l==1&&!lrepeat) {
			lreverse=0;
			lrepeat =1;
			lskip=1;
		}
		if(!lskip){
			if(l<ls&&!lreverse){
				l++;
				lrepeat = 0;
			}
			else {
				if(!lreverse) ls+=2;
				lreverse = 1;
				l--;
			}
		}
		lskip=0;

		if(i==x) printf("%d",r);

		if(r==1&&!rrepeat){
			rreverse = 0;
			rrepeat=1;
			rskip=1;
		}
		if(!rskip){
			if(r<rs&&!rreverse){
				rrepeat =0 ;
				r++;
			}
			else {
				if(!rreverse) rs+=2;
				rreverse = 1;
				r--;
			}
		}
		rskip=0;
	}
}