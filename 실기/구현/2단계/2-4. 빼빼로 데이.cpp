#include<bits/stdc++.h>
using namespace std;
int main()
{
	// 시간을 분 단위로 변환해서 문제를 해결해보자.
	int d,h,m; cin>>d>>h>>m;
	// 11월 1일 0시 0분으로부터 지난 시간
	int t1 = (d-1)*24*60 + h*60 + m ; // d h:m 
	int t2 = (11-1)*24*60 + 11*60 + 11; // 11 11:11
	
	if(t1 < t2) cout<<-1;
	else cout << t1 - t2;
}
