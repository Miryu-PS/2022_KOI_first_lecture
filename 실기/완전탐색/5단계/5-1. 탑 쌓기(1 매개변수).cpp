#include<bits/stdc++.h>
using namespace std;
int N,B ,ans = INT_MAX;
int arr[22];
int sum = 0;
void dfs(int x) // x��° ���� ���� �� ���� ���Ѵ�.
{
	if(sum >= B)
	{
		ans = min(ans, sum);
		return ;
	}
	if(x == N) 	return ;
	
	//x�� ���� ���ڴ�
	sum += arr[x];
	dfs(x+1);
	sum -= arr[x];
	// �Ⱦ��ڴ�.
	dfs(x+1);
}
int main()
{
	cin>>N>>B;
	for(int i=0; i<N; i++) cin>>arr[i];
	dfs(0);
	cout<<ans-B;
}
