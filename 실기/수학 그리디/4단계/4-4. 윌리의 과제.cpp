#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
priority_queue<int, vector<int>, greater<int>> pq; // 고른 과제들 
pii arr[1005];
/*
과제들을 기한 순으로 정렬하면 언제나 나중에 나오는 과제는 앞에 나온 과제를 대체할 수 있다 
ex) (기한 1일 점수 5)인 과제를 골랐을 때 나중에 (기한 3일 점수 6)인 과제를 기존 과제를 대신하여 고를 수 있다.
따라서 정렬한 과제들을 차례로 보면서 다음과 같은 과정을 반복한다.
1. 과제의 기한이 d인데, 아직 d개의 과제를 고르지 않았을 경우 그 과제를 고른다.
2. 과제의 기한이 d이고 d개의 과제를 골랐지만
고른 과제들 중 점수가 가장 낮은 과제보다 이 과제에서 높은 점수를 얻을 수 있다면 이 과제를 대신 고른다. 

이 때 고른 과제들 중 점수가 가장 낮은 과제를 효율적으로 관리하기 위해 우선순위 큐를 사용한다. 
*/
int main()
{
	int n; cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
	sort(arr, arr+n);
	for(int i=0; i<n; i++)
	{
		if(pq.size() < arr[i].first) pq.push(arr[i].second); // 1번 과정 
		else if(pq.top() < arr[i].second) {pq.pop(); pq.push(arr[i].second);} // 2번 과정 
	}
	int ans = 0;
	while(!pq.empty()) {ans += pq.top(); pq.pop();} // 고른 과제들의 점수합을 구한다. 
	cout << ans;
}
