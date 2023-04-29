#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int N,M,tom[1050][1050],unripe,ans;
bool OOB(int x, int y) {return x<0||x>=N||y<0||y>=M;}
int main()
{
	cin>>N>>M;
	queue<pii> Q;
	for(int i=0;i<N;i++) for(int j=0;j<M;j++) {
		cin>>tom[i][j];
		if(tom[i][j] == 1) Q.push({i,j});
		if(tom[i][j] == 0) unripe++; // 익지 않은 토마토의 개수  
	}
	while(!Q.empty())
	{
		auto tmp = Q.front(); Q.pop();
		int x = tmp.first, y=tmp.second;
		ans = max(ans, tom[x][y]);
		for(int i=0; i<4; i++)
		{
			int nx=x+dx[i], ny=y+dy[i];
			if(OOB(nx,ny) || tom[nx][ny] != 0) continue;
			tom[nx][ny] = tom[x][y] + 1;
			unripe--;
			Q.push({nx,ny});
		}
	}
	if(unripe) {cout<<-1; return 0;}
	cout<<ans-1;
}
