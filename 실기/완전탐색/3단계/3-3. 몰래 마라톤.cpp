#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
pii arr[100005];
int dist(int x, int y) // arr[x]�� arr[y] ������ �Ÿ�
{
	return abs(arr[x].first-arr[y].first) + abs(arr[x].second-arr[y].second);
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	for(int i=1; i<=n; i++) cin>>arr[i].first>>arr[i].second;
	int totaldist = 0, ecomax = 0;
	//totaldist = ��ü�Ÿ� ecomax = ���� Ư�� ���� �ϳ��� �پ�Ѿ ������ �� �ִ� �̵��Ÿ� �� �ִ�
	for(int i=2; i<=n; i++)
	{
		totaldist += dist(i-1, i);
		if(i!=n) 
		{
			int ecoi = (dist(i-1,i) + dist(i,i+1)) - dist(i-1, i+1);// i�� ������ �پ�Ѿ��� �� ������ �� �ִ� �Ÿ�
			ecomax = max(ecomax, ecoi;
	}
	cout<<totaldist-ecomax;
}
