#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using pcii = pair<char, pii>; // .f char .s.f, .s.s int
int N,K,ans;
int arr[20]; // 1,2,3 중 하나
pcii con[50];
void dfs(int x) // x 단계에서 arr[x]를 결정
{
	if(x==N)
	{

		//arr[0]~ arr[N-1]이 조건을 만족하면 ans++
		for(int i=0; i<K; i++)
		{
			char sd = con[i].first;
			int a = con[i].second.first;
			int b = con[i].second.second;
			if(sd == 'S' && arr[a] != arr[b]) return ;
			if(sd == 'D' && arr[a] == arr[b]) return ;
		}
		ans++;
		return ;
	}
	for(int i=1; i<=3; i++)
	{
		arr[x] = i;
		dfs(x+1);
		arr[x] = 0;
	}
}
int main()
{
	cin>>N>>K;
	for(int i=0; i<K; i++) cin>>con[i].first>>con[i].second.first>>con[i].second.second;
	dfs(0);
	cout<<ans;
}
