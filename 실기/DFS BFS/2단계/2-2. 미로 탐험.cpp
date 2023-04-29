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
	
	if(maze[0][0] != '1') {cout << -1; return 0;} // ���� ������ ���� �ƴ϶�� -1 ��� 
	queue<pii> Q;
	dist[0][0] = 1; Q.push({0,0}); // �������� �Ÿ� = 1, Q�� ������ �ֱ�  
	while(!Q.empty() && dist[N-1][M-1] == 0) //Q�� ��ų� ������������ �Ÿ��� ���ߴٸ� �ݺ� ���� 
	{
		auto tmp = Q.front(); Q.pop(); // Q���� �ϳ��� ������ tmp�� ���� 
		int x=tmp.first, y=tmp.second;
		for(int i=0; i<4; i++)
		{
			int nx=x+dx[i], ny=y+dy[i]; // (x,y) �� ������ (nx,ny) 
			if(nx<0||nx>=N||ny<0||ny>=M) continue; // ���� ���̶�� pass 
			if(dist[nx][ny] || maze[nx][ny] != '1') continue; // �̹� �湮�߰ų�, ���� �ƴ϶�� pass 
			dist[nx][ny] = dist[x][y] + 1; 
			Q.push({nx,ny});
		}
	}
	if(dist[N-1][M-1]) cout<<dist[N-1][M-1];
	else cout<<-1;
}
