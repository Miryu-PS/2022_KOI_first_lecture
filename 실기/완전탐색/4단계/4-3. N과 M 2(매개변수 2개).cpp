#include<bits/stdc++.h>
using namespace std;
int N,M; 
int arr[10];
void dfs(int x, int num) // arr[x]를 num 이상의 수로칠하고 다음단계로 x==M일 때에는 출력
{
	if(x == M)
	{
		for(int i=0; i<M; i++) cout<<arr[i]<<" ";
		cout<<'\n'; return ;
	}
	for(int i=num; i<=N; i++) // arr[x]를 i로 칠한다.
	{
		arr[x] = i;
		dfs(x+1, i+1);
		arr[x] = 0;
	}
}
int main()
{
	cin>>N>>M;
	dfs(0, 1);
}
