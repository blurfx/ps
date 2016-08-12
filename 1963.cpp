#include <cstdio>
#include <cmath>
#include <queue>
using namespace std;
struct change{
	int pw,step;
};
int prime[10000]={0};
int main(){
	int t,i,j;
	double sq;
	scanf("%d",&t);
	for(i=1000;i<=9999;i++){
		sq = sqrt((double)i);
		for(j=2;j<=sq;j++){
			if(i%j==0){
				prime[i] = 1;
				break;
			}
		}
	}
	while(t--){
		int visit[10000] = {0};
		queue<change> q;
		change chg;
		int from,dest,digit,rest,ans=987654321;
		scanf("%d%d",&from,&dest);
		chg.pw = from;
		chg.step = 0;
		visit[from] = 1;
		q.push(chg);
		while(!q.empty()){
			if(q.front().step >= ans){
				q.pop();
				continue;
			}
			if(q.front().pw == dest){
				ans = q.front().step;
				q.pop();
				continue;
			}
			for(i=1;i<=1000;i*=10){
				rest = q.front().pw - ((q.front().pw / i) % 10) * i;
				for(j=0;j<=9;j++){
					if(i==1000&&!j) continue;
					if(prime[j*i+rest]||visit[j*i+rest]) continue;
					chg.pw = j*i+rest;
					chg.step = q.front().step + 1;
					q.push(chg);
					visit[chg.pw] = 1;
				}
			}
			q.pop();
		}
		printf("%d\n",ans);
	}
}
