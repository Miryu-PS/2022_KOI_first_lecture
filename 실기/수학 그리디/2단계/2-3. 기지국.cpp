#include<bits/stdc++.h>
using namespace std;
int p[200005];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	for(int i=0; i<n; i++) cin>>p[i];
	sort(p,p+n);
	cout<<p[(n-1)/2];
	// ������ �߾Ӱ��� ���� �ȴ�.
	// why?
	// ���ʿ������� x��° ������ x+1��° �� �������� �������� 1��ŭ �ű� ��, (1~x)��° �������� 1��ŭ �־�����, (x+1 ~ n)��° �������� 1��ŭ ��������Ƿ� �� �Ÿ��� +(2*x - n) ��ŭ ���Ѵ�. �� ���� �������� ����� �ٲ�� ������ �ּҰ�. x = n/2
}
	
