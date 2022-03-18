#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int h,m; cin>>h>>m;
	// if문으로 해결해도 됨
	h+=23, m+=60; // 23시간 60분 추가
	m-=45; // 45분 빼기
	
	// h시간 m분을 정규시간으로
	// 시간은 h + m/60, 분은 m%60
	// 시간은 24로 나눈 나머지를 취하여 하루가 넘는 부분을 제거
	cout<<(h+m/60)%24<<" "<<m%60;
}
