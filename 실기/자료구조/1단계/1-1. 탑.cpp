#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	stack<pii> st; // 현재 시점에서 왼쪽을 바라봤을 때 보이는 탑들만 들어가있는 스택
	st.push({0,INT_MAX}); // 보이는 탑이 없을 때 = 0번의 높이 무한대인 탑을 가상으로 만들어 이 탑만 보일 때로 설정
	int n; cin>>n;
	for(int i=1; i<=n; i++)
	{
		int x; cin>>x;
		while(!st.empty() && st.top().second < x) st.pop(); // 왼쪽에 보이는 탑이 지금 탑보다 낮다면 이후 탑들에서는 보이지 않음.
		cout<<st.top().first<<' ';
		st.push({i,x});
	}
	// n번 돌아가는 반복문 안에서 while 문이 돌아가서 O(n^2)으로 생각할 수 있지만
	// 어짜피 모든 탑들이 스택 안에 한 번만 들어가고 한 번만 나오기 때문에
	// 반복문을 돌면서 while 문 안의 내용이 실행되는 총 횟수는 2n번이다.
	// 전체 시간복잡도 O(n)
}
