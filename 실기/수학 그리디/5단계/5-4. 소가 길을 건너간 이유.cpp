#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
/*
닭들을 T가 작은 순서대로 볼 때, 
닭은 도움을 준다면 가장 B가 작은 소부터 돕는 것이 최선이다. (비교우위)
*/
pii ani[40040];
priority_queue<int, vector<int>, greater<int>> cowB; // 최소값 우선순위큐
int main()
{
	/* 
	5-2와 마찬가지로 소와 닭은 전부 한 배열에서 시간 순으로 정렬한다.
	닭 : {T, 1} 
	소 : {A, -B} 
	*/
	
	int C,N; cin>>C>>N;
	for(int i=0; i<C; i++) 
	{
		int T; cin>>T; ani[i] = {T,1};
	}
	for(int i=0; i<N; i++)
	{
		int A,B; cin>>A>>B;
		ani[C+i] = {A, -B};
	}
	sort(ani, ani+C+N); // 시간 순으로, 시간이 같다면 소->닭 순서로
	int ans = 0;
	// cowB 는 현재 시각에 도움이 필요한 소들의 B들을 관리하는 최소값 우선순위 큐
	for(int i=0; i<C+N; i++)
	{
		while(!cowB.empty() && cowB.top() < ani[i].first) // 현재 시각 ani[i].first 보다 작은 B들을 cowB에서 제거
		{
			cowB.pop();
		}
		if(ani[i].second == 1) // 닭이라면
		{
			if(!cowB.empty()) // 도움을 필요로하는 소가 있다면
			{
				ans++; cowB.pop(); // 매칭
			}
		}
		else // 소라면
		{
			int timeB = -ani[i].second; // 이 소는 timeB까지 도움을 받을 수 있다.
			cowB.push(timeB);
		}
	}
	cout<<ans;
}
