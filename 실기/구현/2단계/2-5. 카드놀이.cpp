#include<bits/stdc++.h>
using namespace std;
int As[11], Bs[11];
// 관리해야 하는 정보: 총 승점, 마지막으로 이긴 사람
int Asum = 0, Bsum = 0;
char lastwin = 'D';
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=1; i<=10; i++) cin>>As[i]; // A의 점수 입력
	for(int i=1; i<=10; i++) cin>>Bs[i]; // B의 점수 입력
	for(int i=1; i<=10; i++) // i번째 라운드
	{
		if(As[i] > Bs[i])
		{
			lastwin = 'A';
			Asum += 3;
		}
		else if(As[i] < Bs[i]) 
		{
			lastwin = 'B';
			Bsum += 3;
		}
		else // 같을 때
		{
			Asum++; Bsum++;
		}
	}
	
	cout<<Asum<<" "<<Bsum<<"\n"; // 점수 출력
	if(Asum > Bsum) cout<<'A';
	else if(Asum < Bsum) cout<<'B';
	else cout<<lastwin;
}
