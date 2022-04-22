#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	stack<pii> st; // ���� �������� ������ �ٶ���� �� ���̴� ž�鸸 ���ִ� ����
	st.push({0,INT_MAX}); // ���̴� ž�� ���� �� = 0���� ���� ���Ѵ��� ž�� �������� ����� �� ž�� ���� ���� ����
	int n; cin>>n;
	for(int i=1; i<=n; i++)
	{
		int x; cin>>x;
		while(!st.empty() && st.top().second < x) st.pop(); // ���ʿ� ���̴� ž�� ���� ž���� ���ٸ� ���� ž�鿡���� ������ ����.
		cout<<st.top().first<<' ';
		st.push({i,x});
	}
	// n�� ���ư��� �ݺ��� �ȿ��� while ���� ���ư��� O(n^2)���� ������ �� ������
	// ��¥�� ��� ž���� ���� �ȿ� �� ���� ���� �� ���� ������ ������
	// �ݺ����� ���鼭 while �� ���� ������ ����Ǵ� �� Ƚ���� 2n���̴�.
	// ��ü �ð����⵵ O(n)
}
