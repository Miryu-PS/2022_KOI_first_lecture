#include<bits/stdc++.h>
using namespace std;
int N,M;
int arr[10], vst[10]; 
void dfs(int x) // arr[x] 를 채운다. 단 x가 M일 때에는 arr[0 ~ M-1] 출력
{
	if(x==M)
	{
		for(int i=0; i<M; i++) cout<<arr[i]<<" ";
		cout<<'\n';
		return ;
	}
	for(int i=1; i<=N; i++) // 도전! arr[x] = i로 해보자
	{
		if(vst[i] == 1) continue; // 도전 실패
		arr[x] = i;
		vst[i] = 1;
		dfs(x+1);
		arr[x] = 0;
		vst[i] = 0;
	}
}
int main()
{
	cin>>N>>M;
	dfs(0);
}
