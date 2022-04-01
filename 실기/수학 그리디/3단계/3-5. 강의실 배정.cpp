#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
priority_queue<int, vector<int>, greater<int>> pq; // {���ǽ��� ���� ������ �ð�}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	vector<pii> arr(n);
	for(int i=0; i<n; i++) cin>>arr[i].first>>arr[i].second;
	sort(arr.begin(), arr.end());
	for(int i=0; i<n; i++)
	{
		if(!pq.empty() && pq.top() <= arr[i].first) // ����ִ� ���ǽ��� �ִ� ���
		{
			int x=pq.top(); pq.pop();
			pq.push(arr[i].second);
		}
		else
		{
			pq.push(arr[i].second);
		}
	}
	cout<<pq.size();
}
