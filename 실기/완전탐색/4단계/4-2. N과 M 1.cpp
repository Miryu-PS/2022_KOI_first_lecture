#include<bits/stdc++.h>
using namespace std;
int N,M;
int arr[10], vst[10]; 
void dfs(int x) // arr[x] �� ä���. �� x�� M�� ������ arr[0 ~ M-1] ���
{
	if(x==M)
	{
		for(int i=0; i<M; i++) cout<<arr[i]<<" ";
		cout<<'\n';
		return ;
	}
	for(int i=1; i<=N; i++) // ����! arr[x] = i�� �غ���
	{
		if(vst[i] == 1) continue; // ���� ����
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
