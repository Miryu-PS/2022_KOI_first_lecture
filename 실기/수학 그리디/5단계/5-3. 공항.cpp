#include<bits/stdc++.h>
using namespace std;
//비행기가 도킹할 때, 가능한 한 큰 번호의 게이트에 도킹하는 것이 최선이다.
//Union Find 나 Segment tree를 이용하여 문제를 해결할 수 있다.
// 본문의 풀이는 Union Find를 이용한 풀이이며, Union Find에 대한 내용을 모를 경우에는 인터넷에서 조사 후 풀이를 보는 것을 추천한다.
int pa[100005];
int find(int x)
{
	return (x==pa[x]) ? x : (pa[x] = find(pa[x]));
}
void uni(int x, int y) // x<y
{
	pa[y] = x;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	int g,p; cin>>g>>p;
	for(int i=1; i<=g; i++) pa[i]=i;
	for(int i=1; i<=p; i++) 
	{
		int x; cin>>x;
		int dock = find(x); // x번 이하의 비어있는 가장 가까운 게이트 번호 find(x)
		if(dock == 0)
		{
			cout<<(i-1); return 0;
		}
		else
		{
			uni(dock-1, dock); // 이제 dock에 온 비행기를 dock-1로 넘겨야한다.
		}
	}
	cout<<p;
}
