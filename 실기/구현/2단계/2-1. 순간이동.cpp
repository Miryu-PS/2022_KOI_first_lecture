#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int a,b,x,y; cin>>a>>b>>x>>y;
	//다음과 같은 3가지 경로가 가능하다
	int d1 = abs(a-x) + abs(y-b); // a -> x|y -> b
	int d2 = abs(a-b); // a -> b
	int d3 = abs(a-y) + abs(x-b); // a -> y|x -> b
	cout<<min({d1, d2, d3});
}
