#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int h,m; cin>>h>>m;
	
	if(m>=45) m-=45; // 분이 45를 넘으면 그냥 45분을 뺀다. 
	else {h--; m+=15;} // 분이 45를 넘지 않으면 1시간을 빼고 15분을 더한다. 
	
	if(h<0) h+=24; // 시간이 음수로 내려가면 24를 더한다. 
	
	cout<<h<<" "<<m;
}
