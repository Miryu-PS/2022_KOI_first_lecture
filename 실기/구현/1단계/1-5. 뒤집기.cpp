#include<bits/stdc++.h>
using namespace std;
int rev(int x) // 주어진 세자리수 x를 뒤집은 값을 반환하는 함수
{
	int a,b,c; // a,b,c에 각각 백의자리, 십의자리, 일의자리를 저장할 것
	a = x / 100; 
	b = (x / 10) % 10; 
	c = x % 10;
	return c*100 + b*10 + a; 
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int x,y; cin>>x>>y;
	int a = rev(x);
	int b = rev(y);
	cout << max(a,b); 
	/* 아직 max 함수가 익숙치 않다면
	if(a<b) cout<<b;
	else cout<<a;
	로 대체하여도 상관없다.*/
}
