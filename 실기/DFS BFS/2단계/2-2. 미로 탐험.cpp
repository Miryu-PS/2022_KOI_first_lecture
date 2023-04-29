#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int dist[105][105];
int dx[]={1,0,-1,0}, dy[]={0,1,0,-1};
int main()
{
	int N,M; cin>>N>>M;
	string maze[105];
	for(int i=0; i<N; i++) cin>>maze[i];
	
	if(maze[0][0] != '1') {cout << -1; return 0;} // 시작 지점이 길이 아니라면 -1 출력 
	queue<pii> Q;
	dist[0][0] = 1; Q.push({0,0}); // 시작점의 거리 = 1, Q에 시작점 넣기  
	while(!Q.empty() && dist[N-1][M-1] == 0) //Q가 비거나 목적지까지의 거리를 구했다면 반복 종료 
	{
		auto tmp = Q.front(); Q.pop(); // Q에서 하나를 꺼내서 tmp에 저장 
		int x=tmp.first, y=tmp.second;
		for(int i=0; i<4; i++)
		{
			int nx=x+dx[i], ny=y+dy[i]; // (x,y) 와 인접한 (nx,ny) 
			if(nx<0||nx>=N||ny<0||ny>=M) continue; // 범위 밖이라면 pass 
			if(dist[nx][ny] || maze[nx][ny] != '1') continue; // 이미 방문했거나, 길이 아니라면 pass 
			dist[nx][ny] = dist[x][y] + 1; 
			Q.push({nx,ny});
		}
	}
	if(dist[N-1][M-1]) cout<<dist[N-1][M-1];
	else cout<<-1;
}
