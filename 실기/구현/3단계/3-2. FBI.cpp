#include<bits/stdc++.h>
using namespace std;
// bool 변수를 체크 용도로 사용하는 연습 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	bool isprinted = false; // 한 번이라도 FBI를 찾아서 출력한 적이 있는가 
	for(int T=1; T<=5; T++){
		string s; cin>>s;
		bool chk=false; // s 안에 FBI가 있는가 
		for(int i=0; i+2 < s.size(); i++)
		{
			if(s[i]=='F'&&s[i+1]=='B'&&s[i+2]=='I') // 또는 s.substr(i,3) == "FBI" 
				chk=true;
		}
		if(chk) {cout<<T<<' '; isprinted = true;} // FBI를 찾았다면 번호를 출력한다. 
	}
	if(!isprinted) cout<<"HE GOT AWAY!"; // 만약 출력된 적이 없다면 
}
