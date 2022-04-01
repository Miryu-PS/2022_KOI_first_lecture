#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
priority_queue<int, vector<int>, greater<int>> pq; // �� ������ 
pii arr[1005];
/*
�������� ���� ������ �����ϸ� ������ ���߿� ������ ������ �տ� ���� ������ ��ü�� �� �ִ� 
ex) (���� 1�� ���� 5)�� ������ ����� �� ���߿� (���� 3�� ���� 6)�� ������ ���� ������ ����Ͽ� �� �� �ִ�.
���� ������ �������� ���ʷ� ���鼭 ������ ���� ������ �ݺ��Ѵ�.
1. ������ ������ d�ε�, ���� d���� ������ ���� �ʾ��� ��� �� ������ ����.
2. ������ ������ d�̰� d���� ������ �������
�� ������ �� ������ ���� ���� �������� �� �������� ���� ������ ���� �� �ִٸ� �� ������ ��� ����. 

�� �� �� ������ �� ������ ���� ���� ������ ȿ�������� �����ϱ� ���� �켱���� ť�� ����Ѵ�. 
*/
int main()
{
	int n; cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
	sort(arr, arr+n);
	for(int i=0; i<n; i++)
	{
		if(pq.size() < arr[i].first) pq.push(arr[i].second); // 1�� ���� 
		else if(pq.top() < arr[i].second) {pq.pop(); pq.push(arr[i].second);} // 2�� ���� 
	}
	int ans = 0;
	while(!pq.empty()) {ans += pq.top(); pq.pop();} // �� �������� �������� ���Ѵ�. 
	cout << ans;
}
