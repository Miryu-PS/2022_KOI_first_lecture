#include<bits/stdc++.h>
using namespace std;
int c[4], m[4];
int pour(int x, int y) // x를 y에 붓는다
{
	int totalmilk = m[x] + m[y];
	if(c[y] >= totalmilk) // 만약 우유의 총량이 양동이 y에 전부 들어가면
	{
		m[x] = 0;
		m[y] = totalmilk;
	}
	else // 우유의 총량이 양동이 y에 다 들어가지 않으면
	{
		m[y] = c[y];
		m[x] = totalmilk - c[y];
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=1; i<=3; i++) cin>>c[i]>>m[i];
	for(int i=1; i<=100; i++)
	{
		int now = (i+2)%3+1; // 1 2 3 1 2 3 1 2 3
		int next = i%3 + 1; // 2 3 1 2 3 1 2 3 1
		pour(now, next);
		//now next % 연산 어려우면 그냥 now=1, next=2 에서 시작해서 now++, next++, if(now==4) now=1 if(next==4) next=1 해도 된다.
	}
	cout<<m[1]<<'\n'<<m[2]<<'\n'<<m[3];
}
