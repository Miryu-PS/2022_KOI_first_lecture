#include<bits/stdc++.h>
using namespace std;
int n;
string str;
bool check(int len) // K = len�϶� ��ġ�� �ʵ��� ������ ��� ���� �������� Ȯ���ϴ� �Լ�  
{
	set<string> S;
	for(int i=0; i+len-1<n; i++) // str[i ~ (i+len-1)]
	{
		string find = str.substr(i,len); // str[i ~ (i+len-1)]
		if(S.count(find) > 0) return false; // ���� S�� find�� �ִٸ� -> ��ġ�� ������ �ִ�  
		S.insert(find); 
	}
	return true;�� 
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
