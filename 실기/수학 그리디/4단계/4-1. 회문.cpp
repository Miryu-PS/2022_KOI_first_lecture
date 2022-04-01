#include<bits/stdc++.h>
using namespace std;
string s;
bool pal(int x, int y) // 문자열 s의 x번부터 y번까지가 팰린드롬인지 검사하는 함수
{
	while(x<y)
	{
		if(s[x] != s[y]) return false;
		x++; y--;
	}
	return true; 
} 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	int T; cin>>T;
	while(T--){ // T번 반복하는 반복문 
		cin>>s;
		int L=0, R=s.size()-1;
		int ans=0;
		while(L<R) // L ~ R 구간을 검사하기 위해 L번과 R번을 비교한다. 
		{
			if(s[L] != s[R]) // L번과 R번이 다르다면 유사회문이 되기 위해서는 L+1 ~ R이나 L ~ R-1 중 하나는 회문이여야한다. 
			{
				if(pal(L+1, R) || pal(L, R-1)) // 유사회문일 경우 
				{
					ans=1; break;  
				}
				else // 회문도 유사회문도 아닐 경우 
				{
					ans=2; break;
				}
			}
			L++; R--;
		}
		cout<<ans<<'\n';
	}
}
