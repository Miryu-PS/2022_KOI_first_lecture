#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	int N; cin>>N;
	int ans = INT_MAX;
	for(int i=0; i*5 <= N; i++) // 5�� ���� ���� i�� ���� ��üŽ��
	{
		int last = N - i*5;
		if(last % 3 == 0)
		{
			ans = min(ans, i + (last/3));
			// 5��¥�� i��, 3��¥�� (last/3)���� �� N��
		}
	}
	if(ans == INT_MAX) ans = -1; // �߰����� �������� -1 ���
	cout<<ans;
}

