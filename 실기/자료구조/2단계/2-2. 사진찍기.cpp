#include<bits/stdc++.h>
using namespace std;
int n;
string str;
bool check(int len) // K = len일때 겹치지 않도록 사진을 찍는 것이 가능한지 확인하는 함수  
{
	set<string> S;
	for(int i=0; i+len-1<n; i++) // str[i ~ (i+len-1)]
	{
		string find = str.substr(i,len); // str[i ~ (i+len-1)]
		if(S.count(find) > 0) return false; // 만약 S에 find가 있다면 -> 겹치는 사진이 있다  
		S.insert(find); 
	}
	return true;면 
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin>>n>>str;
	for(int i=1; i<=n; i++)
	{
		if(check(i))
		{
			cout<<i; return 0;
		}
	}
}
