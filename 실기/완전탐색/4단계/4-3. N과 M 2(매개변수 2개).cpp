#include<bits/stdc++.h>
using namespace std;
int N,M; 
int arr[10];
void dfs(int x, int num) // arr[x]�� num �̻��� ����ĥ�ϰ� �����ܰ�� x==M�� ������ ���
{
	if(x == M)
	{
		for(int i=0; i<M; i++) cout<<arr[i]<<" ";
		cout<<'\n'; return ;
	}
	for(int i=num; i<=N; i++) // arr[x]�� i�� ĥ�Ѵ�.
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
