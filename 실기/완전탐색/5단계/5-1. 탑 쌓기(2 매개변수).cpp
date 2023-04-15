#include<bits/stdc++.h>
using namespace std;
int N,B ,ans = INT_MAX;
int arr[22];
void dfs(int x, int sum) // x번째 블럭을 쓸지 안 쓸지 정한다. 지금까지 고른 블럭의 높이 합이 sum
{
	if(sum >= B)
	{
		ans = min(ans, sum);
		return ;
	}
	if(x == N) 	return ;
	
	//x번 블럭을 쓰겠다
	dfs(x+1, sum + arr[x]);
	// 안쓰겠다.
	dfs(x+1, sum);
}
int main()
{
	cin>>N>>B;
	for(int i=0; i<N; i++) cin>>arr[i];
	dfs(0,0);
	cout<<ans-B;
}
