#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	string s; cin>>s;
	stack<char> st;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == '(') st.push('(');
		else
		{
			if(st.empty()) {cout<<":("; return 0;}
			else st.pop();
		}
	}
	if(st.empty()) cout<<":)";
	else cout<<":(";
}
