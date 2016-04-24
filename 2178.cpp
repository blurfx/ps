#include <iostream>
#include <queue>
using namespace std;
int map[501][101] = {0};
int visit[501][101] = {0};
struct pt{
	int x;
	int y;
};
queue<pt> q;
void setVisit(int x, int y, pt o){
	pt next;
	next.x = x;
	next.y = y;
	q.push(next);
	visit[y][x]+=visit[o.y][o.x]+1;
}
int main(){
	
	int n,m,i,j;char c;
	pt o;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++) {
			cin >> c;
			map[i][j]=c-'0';
		}
	}
	o.x=0;o.y=0;
	q.push(o);
	visit[0][0]=1;
	while(!q.empty()){
		pt front = q.front();
		q.pop();
		if(front.x-1 >= 0 && !visit[front.y][front.x-1] && map[front.y][front.x-1])
			setVisit(front.x-1,front.y,front);
		if(front.x+1 < m && !visit[front.y][front.x+1] && map[front.y][front.x+1])
			setVisit(front.x+1,front.y,front);
		if(front.y-1 >= 0 && !visit[front.y-1][front.x] && map[front.y-1][front.x])
			setVisit(front.x,front.y-1,front);
		if(front.y+1 < n && !visit[front.y+1][front.x] && map[front.y+1][front.x])
			setVisit(front.x,front.y+1,front);
	}
	cout << visit[n-1][m-1] << '\n';
}
