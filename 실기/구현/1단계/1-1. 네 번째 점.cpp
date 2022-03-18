#include<bits/stdc++.h>
using namespace std;
int x[3], y[3];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=0;i<3;i++) cin>>x[i]>>y[i];
	// 직사각형의 네 꼭지점은 x좌표가 2개씩 점을 짝지으면 같고, y좌표도 마찬가지이다.
	// 즉 나머지 한 꼭지점의 좌표는 3개의 점 중 다른 2개와 다른 x좌표와 y좌표를 찾으면 된다.
	
	// 다른 x좌표 찾기
	if(x[0] == x[1]) cout<<x[2]<<" ";
	else if(x[1] == x[2]) cout<<x[0]<<" ";
	else cout<<x[1]<<" ";
	
	//다른 y좌표 찾기
	if(y[0] == y[1]) cout<<y[2]<<" ";
	else if(y[1] == y[2]) cout<<y[0]<<" ";
	else cout<<y[1]<<" ";
}
