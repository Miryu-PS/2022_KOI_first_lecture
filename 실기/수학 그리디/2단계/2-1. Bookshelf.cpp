#include<bits/stdc++.h>
using namespace std;
int h[20002];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n,b; cin>>n>>b;
	for(int i=0; i<n; i++) cin>>h[i];
	sort(h, h+n, greater<>()); // �������� ����
	// sort(h, h+n, cmp) -> ������ ���Լ� cmp ����
	// sort(h, h+n, [](int x, int y){return x>y;}) 
	// ������ ���̰� ���� å����� ���� ���� ����.(�׸���)
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum += h[i];
		if(sum >= b) 
		{
			cout<<i+1; return 0;
		}
	}
}
