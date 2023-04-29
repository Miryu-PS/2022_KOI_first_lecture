#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> V,RV;
vector<bool> vst;
int cnt = 0;
void dfs(vector<vector<int>> &G, int x)
{
	vst[x] = true; cnt++;
	for(auto i:G[x])
	{
		if(vst[i]) continue;
		dfs(G, i);
	}
}
int main()
{
	int N,M; cin>>N>>M;
	V.resize(N+1); RV.resize(N+1); vst.resize(N+1);
	for(int i=0; i<M; i++)
	{
		int x,y; cin>>x>>y;
		V[x].push_back(y);
		RV[y].push_back(x);
	}
	int ans = 0;
	for(int i=1; i<=N; i++)
	{
		int icnt = 0;
		fill(vst.begin(), vst.end(), false); cnt = 0;
		dfs(V, i);
		icnt += cnt - 1;
		fill(vst.begin(), vst.end(), false); cnt = 0;
		dfs(RV, i);
		icnt += cnt - 1;
		if(icnt == N-1) ans++;
	}
	cout<<ans;
}
