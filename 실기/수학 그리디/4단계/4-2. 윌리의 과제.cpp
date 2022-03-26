#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
priority_queue<int, vector<int>, greater<int>> pq; // 고른 과제들 
pii arr[1005];
int main()
{
	int n; cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
	sort(arr, arr+n);
	for(int i=0; i<n; i++)
	{
		if(pq.size() < arr[i].first) pq.push(arr[i].second);
		else if(pq.top() < arr[i].second) {pq.pop(); pq.push(arr[i].second);}
	}
	int ans = 0;
	while(!pq.empty()) {ans += pq.top(); pq.pop();}
	cout << ans;
}
