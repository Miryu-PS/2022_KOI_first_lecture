#include<bits/stdc++.h>
using namespace std;
int main()
{
	// 필요한 정사각형의 가로 길이 = 나타나는 영역의 최대 x좌표와 최소 x 좌표의 차이
	int x1,y1,x2,y2,x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	int t1 = max(x2,x4)-min(x1,x3); // 필요한 가로길이
	int t2 = max(y2,y4)-min(y1,y3); // 필요한 세로길이
	int maxt = max(t1, t2); // 필요한 정사각형의 한 변의 길이
	cout<< maxt * maxt;
}
