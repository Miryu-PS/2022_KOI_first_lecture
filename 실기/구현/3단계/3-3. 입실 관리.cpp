#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int T; cin>>T;
	while(T--)
	{
		string s; cin>>s;
		for(int i=0; i<s.size(); i++)
		{
			if('A' <= s[i] && s[i] <= 'Z') s[i] += 'a' - 'A';
			// 3을 5로 만들려면 (5-3)을 더하듯이 'A'를 'a'로 만들기 위해 'a'-'A' 를 더한다.
			//아스키코드에서 'A'는 65, 'a'는 97번에 위치
		}
		cout<<s<<'\n';
	}
}
