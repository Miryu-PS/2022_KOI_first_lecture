#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	/*
	������ ���� �� 8���ε�, �������κ��� ���� ���� 3�� �����ؼ� ��Ÿ���ٸ�, �� ��ġ������ ������ 5���� �������� ���ġ ����
	�̰��� �¿�/�����Ķ��� ���� ���� ���ϸ� �ȴ�. 
	*/
	int n; string s; cin>>n>>s;
	int ans=n, R=0, B=0; // ���� ���� ���� R, �Ķ� ���� ���� B 
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='R') R++;
		else B++;
	}
	
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='B') // 0~(i-1)���� i���� ���ӵ� ������ ������ ��� 
		{
			ans = min(ans, R-i); // ������ R-i���� ������ �ű�� ��찡 ���� �� �� �ִ�. 
			break;
		}
	}
	
	for(int i=0; i<s.size(); i++)
	{
		if(s[s.size()-1-i]=='B') //�ڿ������� i���� ���ӵ� ������ ������ ��� 
		{
			ans = min(ans, R-i); // ������ R-i���� ������ �ű�� ��찡 ���� �� �� �ִ�. 
			break;
		}
	}
	// �Ķ��� ���ؼ� �ݺ� 
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
