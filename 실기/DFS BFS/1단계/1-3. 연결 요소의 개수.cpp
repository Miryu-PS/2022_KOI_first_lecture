#include <bits/stdc++.h>
using namespace std;
int N,M,visit[1005];
vector<int> v[1005]; // v[i]�� i�� ������ ������
void dfs(int x) // x�� ������ ��� �����鿡 visit�� üũ
{
	visit[x] = 1;
	for(int y : v[x]) // enhanced for loop / range-based for loop
	{
		if(visit[y] == 0) dfs(y);
	}
}
int main()
{
	cin>>N>>M;
	for(int i=0; i<M; i++)
	{
		int x,y; cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int ans = 0;
	for(int i=1; i<=N; i++)
	{
		if(visit[i] == 0)
		{
			dfs(i); // i�� ����� ��� �����鿡 visit üũ
			ans++;
		}
	}
	cout<<ans;
}
