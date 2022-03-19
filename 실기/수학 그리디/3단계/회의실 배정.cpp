#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	vector<pii> arr(n);
	for(int i=0; i<n; i++) cin>>arr[i].first>>arr[i].second;
	sort(arr.begin(), arr.end(), [](pii p, pii q){
		return p.second < q.second;
	});
	int nowtime = 0, ans=0;
	for(int i=0; i<n; i++)
	{
		if(nowtime <= arr[i].first) { // i번 회의를 진행할 수 있다면 진행한다. why?
			nowtime = arr[i].second;
			ans++;
		}
	}
	cout<<ans;
}
/*
11
0 6
1 4
2 13
3 5
3 8
5 7
5 9
6 10
8 11
8 12
12 14
*/
