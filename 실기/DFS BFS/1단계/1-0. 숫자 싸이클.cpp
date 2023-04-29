#include<bits/stdc++.h>
using namespace std;
int n,p;
int visit[1005];
int ans;
void dfs(int x, int cnt)
{
	if(visit[x] == 0)
	{
		visit[x] = cnt;
		dfs((x*n)%p, cnt+1);
	}
	else
	{
		int cnt2 = visit[x];
		ans = cnt - cnt2;
	}
}
int main()
{
	cin>>n>>p;
	dfs(n, 1);
	cout<<ans;
}
