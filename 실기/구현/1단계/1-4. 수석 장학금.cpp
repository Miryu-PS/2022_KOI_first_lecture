#include<bits/stdc++.h>
using namespace std;
int total[10];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=1; i<=5; i++) // i번 학생의 점수 합을 total[i]에 저장
	{
		int sum = 0;
		for(int j=0; j<4; j++)
		{
			int x; cin>>x; // i번 학생의 j번째 점수를 x에 입력받기
			sum += x; // sum에 점수를 더해서 점수 합을 구하자
		}
		total[i] = sum; // total[i]에 점수 합을 저장
	}
	
	// 점수 합의 최대값과 그 학생을 구하기
	int maxscore = 0; // 점수의 최대값을 저장할 변수
	int maxstudent = 0;
	for(int i=1; i<=5; i++)
	{
		if(maxscore < total[i]) // 만약 i번 학생의 점수 합 total[i]가 지금까지의 최대값보다 크다면
		{
			maxscore = total[i]; // 지금까지의 최대값은 total[i]
			maxstudent = i; // 점수의 최대값을 가진 학생의 번호는 i
		}
	}
	cout<<maxstudent<<" "<<maxscore;
}
