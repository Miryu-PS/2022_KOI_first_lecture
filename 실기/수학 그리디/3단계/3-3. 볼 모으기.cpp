#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	/*
	빨간색 공이 총 8개인데, 왼쪽으로부터 빨간 공이 3개 연속해서 나타난다면, 이 배치에서는 빨간공 5개를 움직여서 재배치 가능
	이것을 좌우/빨강파랑에 따라 전부 비교하면 된다. 
	*/
	int n; string s; cin>>n>>s;
	int ans=n, R=0, B=0; // 빨간 공의 개수 R, 파란 공의 개수 B 
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='R') R++;
		else B++;
	}
	
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='B') // 0~(i-1)번의 i개의 연속된 빨강이 존재한 경우 
		{
			ans = min(ans, R-i); // 나머지 R-i개의 빨강을 옮기는 경우가 답이 될 수 있다. 
			break;
		}
	}
	
	for(int i=0; i<s.size(); i++)
	{
		if(s[s.size()-1-i]=='B') //뒤에서부터 i개의 연속된 빨강이 존재한 경우 
		{
			ans = min(ans, R-i); // 나머지 R-i개의 빨강을 옮기는 경우가 답이 될 수 있다. 
			break;
		}
	}
	// 파랑에 대해서 반복 
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='R') 
		{
			ans = min(ans, B-i); 
			break;
		}
	}
	
	for(int i=0; i<s.size(); i++)
	{
		if(s[s.size()-1-i]=='R') 
		{
			ans = min(ans, B-i); 
			break;
		}
	}
	
	cout<<ans;
}
