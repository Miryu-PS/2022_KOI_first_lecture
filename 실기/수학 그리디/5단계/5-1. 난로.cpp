#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*
	�� �� �ִ� ���� �� (K-1)���� �ð��� ��� ����.
	*/
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n,k,x; cin>>n>>k>>x;
	priority_queue<int> pq; // �ִ밪 �켱����ť
	int time = x, firsttime = x;
	for(int i=2; i<=n; i++)
	{
		cin>>x;
		pq.push(x-time-1); // time�� x ���̿��� x-time-1 ��ŭ�� �� �� �ִ� �ð��� �ִ�.
		time = x; // time ����
	}
	int ans = x+1 - firsttime; // ���� ���� �� ���� ���� �ʴ´ٸ� firsttime ~ (x+1) �� �ð����� ��� �Ѿ��Ѵ�.
	for(int i=1; i<k; i++) // ���� ��� ���� �� �� �ִ� K-1���� �ð��� ���ؼ� �A��
	{
		ans -= pq.top();
		pq.pop();
	}
	cout<<ans;
}
	
