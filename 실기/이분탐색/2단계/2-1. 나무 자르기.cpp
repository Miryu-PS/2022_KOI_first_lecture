#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,h[1000005];
ll tree(int x) // ���� x���� �߶��� �� ���� �� �ִ� ���� ��
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
		if(tree(mid) >= m) // ������ ����ϴٸ�
			L=mid; // L~R -> mid~R
		else // ������ �����ϴٸ�
			R=mid-1; // L~R -> L~mid-1
	}
	cout<<L;
}

