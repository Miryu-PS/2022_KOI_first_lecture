#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n,w,h; cin>>n>>w>>h;
	//가로 w, 세로 h인 직사각형의 대각선 길이는 
	// sqrt(w*w + h*h)이다.
	// 즉 막대의 길이의 제곱이 w*w + h*h 이하인 막대만 박스에 넣을 수 있다.
	while(n--) // n번 반복
	{
		int x; cin>>x; // 막대의 길이 x에 입력
		if(x*x <= w*w + h*h) cout<<"DA\n";
		else cout<<"NE\n";
	}
}
