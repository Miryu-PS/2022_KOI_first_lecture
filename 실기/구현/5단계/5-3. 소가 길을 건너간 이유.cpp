#include<bits/stdc++.h>
using namespace std;
int cow[13]; // cow[x] = x번 소가 마지막으로 보인 위치, -1은 아직 안 보인 상태
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	memset(cow, -1, sizeof(cow)); // memset은 꼭 0이나 -1로 채울 때만 사용할 것 
	int n; cin>>n;
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		int c,p; cin>>c>>p; // 소 c가 p에서 관측되었다. 
		
		if(cow[c] == -1) // 소 c가 처음 관측되었을 경우
		{
			cow[c] = p;
		}
		// 소 c가 전에 봤던 곳(cow[c])과 다른 곳에 있을 경우
		else if(cow[c] != p)
		{
			ans++;
			cow[c] = p;
		}
	}
	cout<<ans;
}

