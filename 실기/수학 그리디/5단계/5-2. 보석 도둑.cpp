#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using ll = long long;
// ������ ���� ���԰� ���� ������ ����.
// ���� ���� ������ �ִ����� ��ġ�� ���� ������ ���� �ȴ�.
pii arr[600060];
priority_queue<int> pq;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	/*
	pair�� �̿��Ͽ� ������ �������� ��°�� �����Ѵ�.
	������ (����, -��ġ)
	������ (����, 1)
	������ ������� ��°�� ���Լ����� �����ϰ� ������� ����.
	*/
	int n,k; cin>>n>>k;
	for(int i=0; i<n; i++){
		int m,v; cin>>m>>v;
		arr[i] = {m, -v};
	}
	for(int i=0; i<k; i++){
		int c; cin>>c;
		arr[n+i] = {c,1};
	}
	sort(arr, arr+n+k); // ���� ������, ���԰� ���ٸ� ����->���� ������ ��������
	ll ans = 0;
	for(int i=0; i<n+k; i++)
	{
		if(arr[i].second==1) // �����̶��
		{
			if(!pq.empty()) // �� �� �ִ� ������ ���� ��
			{
				ans += pq.top(); // ���� ��� ������ ����.
				pq.pop();
			}
		}
		else // �����̶��
		{
			pq.push(-arr[i].second); // �� �� �ִ� ���� ��Ͽ� �߰��Ѵ�.
		}
	}
	cout<<ans;
}
	
	
