#include<bits/stdc++.h>
using namespace std;
int p[1005];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	for(int i=0; i<n; i++) cin>>p[i];
	sort(p,p+n);
	// ��Ľð��� ª�� ������� ����
	// ������� p[0]*n + p[1]*(n-1) + .... p[n-1]*1
	int ans = 0;
	//�� int�� �����ص� �ɱ�?
	// 1000¥�� 1000���� ���� ������
	// 1���� ���ð� �ִ� 100�� * 1000�� = 10��
	// int ���� �̳�. üũ ���ϸ� �ȵ�
	for(int i=0; i<n; i++)
	{
		ans += (n-i) * p[i];
	}
	cout<<ans;
}
	
