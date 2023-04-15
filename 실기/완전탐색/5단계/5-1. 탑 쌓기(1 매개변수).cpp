#include<bits/stdc++.h>
using namespace std;
int N,B ,ans = INT_MAX;
int arr[22];
int sum = 0;
void dfs(int x) // x번째 블럭을 쓸지 안 쓸지 정한다.
{
	if(sum >= B)
	{
		ans = min(ans, sum);
		return ;
	}
	if(x == N) 	return ;
	
	//x번 블럭을 쓰겠다
	sum += arr[x];
	dfs(x+1);
	sum -= arr[x];
	// 안쓰겠다.
	dfs(x+1);
}
int main()
{
	cin>>N>>B;
	for(int i=0; i<N; i++) cin>>arr[i];
	dfs(0);
	cout<<ans-B;
}
