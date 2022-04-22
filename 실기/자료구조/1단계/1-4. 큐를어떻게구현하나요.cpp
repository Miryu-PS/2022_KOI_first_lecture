#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	queue<int> q;
	while(n--)
	{
		string s; cin>>s;
		if(s=="push")
		{
			int x; cin>>x;
			q.push(x);
		}
		if(s=="pop")
		{
			if(q.empty()) cout<<-1<<'\n';
			else {
				cout<<q.front()<<'\n'; q.pop();
			}
		}
		if(s=="size") cout<<q.size()<<'\n';
		if(s=="empty") cout<<q.empty()<<'\n';
		if(s=="front")
		{
			if(q.empty()) cout<<-1<<'\n';
			else {
				cout<<q.front()<<'\n';
			}
		}
		if(s=="back")
		{
			if(q.empty()) cout<<-1<<'\n';
			else {
				cout<<q.back()<<'\n';
			}
		}

	}
}
