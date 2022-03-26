#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n,k; string s; cin>>n>>k>>s;
	int ans=0;
	// 최대한 앞에 있는 햄버거를 먹는 것이 유리하다.
	// 뒤의 햄버거를 먹을 때에 비해 비교 우위에 있다.
	for(int i=0; i<n; i++)
	{
		if(s[i] == 'P')
		{
			for(int j=i-k; j<=i+k; j++)
			{
				if(j>=0 && j<n && s[j] == 'H')
				{
					ans++;
					s[j] = 'E';
					break; // 가장 가까운 반복문 하나 탈출
				}
			}
		}
	}
	cout<<ans;
}
