#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,h[1000005];
ll tree(int x) // 높이 x에서 잘랐을 때 얻을 수 있는 나무 양
{
	ll sum = 0;
	for(int i=0; i<n; i++)
	{
		if(h[i] >= x) sum += h[i]-x;
	}
	return sum;
}
int main()
{
	cin>>n>>m;
	for(int i=0; i<n; i++) cin>>h[i];
	int L=0, R=1e9;
	while(L<R)
	{
		int mid = (L+R+1)/2;
		if(tree(mid) >= m) // 나무가 충분하다면
			L=mid; // L~R -> mid~R
		else // 나무가 부족하다면
			R=mid-1; // L~R -> L~mid-1
	}
	cout<<L;
}

