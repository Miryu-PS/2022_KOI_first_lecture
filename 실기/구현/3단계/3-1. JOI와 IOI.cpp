#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	string s; cin>>s;
	int cntjoi = 0, cntioi = 0;
	for(int i=0; i+2 < s.size(); i++) // i < s.size()-2
	{
		if(s.substr(i,3) == "JOI") cntjoi++;
		if(s.substr(i,3) == "IOI") cntioi++;
		// 문자열.substr(위치, 개수) => 위치에서부터 개수만큼 자른 문자열
		// 문자열은 비교 연산자로 사전순 비교 가능하다.
		// "AB" < "AC"
		// "ABA" < "ABAB"
		// "A" < "a"
	}
	cout<<cntjoi<<'\n'<<cntioi;
}
