//4-4 ������ �ſ� �����ϹǷ� 4-4�� Ǯ�̸� �����ϱ� �ٶ���.
#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
priority_queue<int, vector<int>, greater<int>> pq; 
pii arr[10005];
int main()
{
	int n; cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
	sort(arr, arr+n, [](pii x, pii y){
		return x.second < y.second;
	});
	for(int i=0; i<n; i++)
	{
		if(pq.size() < arr[i].second) pq.push(arr[i].first);
		else if(pq.top() < arr[i].first) {pq.pop(); pq.push(arr[i].first);}
	}
	int ans = 0;
	while(!pq.empty()) {ans += pq.top(); pq.pop();}
	cout << ans;
}
 
