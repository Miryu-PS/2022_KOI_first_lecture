#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using ll = long long;
pii p[100005]; // p[i].first�� ��ġ, p[i].second�� �����
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	ll total = 0; // �� �α���, �־��� ��� int ���
	for(int i=0; i<n; i++) 
	{
		cin>>p[i].first>>p[i].second;
		total += p[i].second;
	}
	ll goal = (total+1)/2;
	// 5���̸� 3��°�� ã�� 6���̾ 3��°�� ã�´�.
	// �ĺ��� ���� (x-1)/2 or x/2 or (x+1)/2
	// �� �� ��Ģ�� �´� ���� ����.
	
	sort(p,p+n); //  ��ġ(first) ������ ����
	ll tmp = 0;
	for(int i=0; i<n; i++)
	{
		tmp+=p[i].second;
		if(tmp >= goal)
		{
			cout<<p[i].first;
			return 0;
		}
	}
}
	
