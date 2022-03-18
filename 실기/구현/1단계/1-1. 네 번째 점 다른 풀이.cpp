#include<bits/stdc++.h>
using namespace std;
int x[3], y[3];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=0;i<3;i++) cin>>x[i]>>y[i];
	// x[i] 들 중 다른 하나 찾기
	// 3개 중 2개가 같다면 중앙값은 언제나 다른 하나와 같다.
	// 정렬한 후 x[0]==x[1]이라면 x[0]-x[1]+x[2] == x[2]
	// 정렬한 후 x[2]==x[1]이라면 x[0]-x[1]+x[2] == x[0]
	sort(x,x+3); sort(y,y+3);
	cout<<x[0]-x[1]+x[2]<<" "<<y[0]-y[1]+y[2];
	
	// 또는 xor의 성질을 이용하여 다음과 같은 코드로 대체할 수도 있다.
	// cout<<x[0]^x[1]^x[2]<<" "<<y[0]^y[1]^y[2]
}
