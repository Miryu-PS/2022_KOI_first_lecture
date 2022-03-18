#include<bits/stdc++.h>
using namespace std;
/*
Lemma 1. 왼쪽사람부터 보면서 자신의 왼쪽 컵홀더가 비어있으면 사용하고, 비어있지 않을 때 오른쪽 컵홀더를 사용하는 것이 최적의 배치 방법이다.

증명: 왼쪽사람부터 보기 때문에 자신의 왼쪽 컵홀더가 비어있으면 무조건 사용해야 빈 컵홀더가 생기는 일을 최대한 막을 수 있다.

Lemma 2. 전부 S여서 맨 오른쪽 컵홀더가 비는 상황을 제외하고는 빈 컵홀더는 절대 생기지 않는다. 

증명: Lemma 1에 의해 모든 사람은 자신의 왼쪽 컵홀더가 비어있으면 무조건 사용한다.

Prove . 사용되는 컵홀더 수는 언제나 min(사람 수, 컵 홀더 수) 이다.

자명하다.

컵 홀더 수는 n + 1 - (L 좌석의 수 / 2) 이다.
LL 이 나올 때마다 컵 홀더가 하나씩 없어진다고 생각할 수 있기 때문
*/
int main()
{
	int n; cin>>n;
	string s; cin>>s;
	int lcnt = 0;
	for(int i=0; i<n; i++) 
	{
		if(s[i] == 'L') lcnt++;
	}
	int holder = n + 1 - lcnt/2;
	cout<<min(n, holder);
}

