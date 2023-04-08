#include<bits/stdc++.h>
using namespace std;
bool arr[100005];
int main()
{
	while(1)
	{
		memset(arr, 0, sizeof(arr));
		int ans = 0;
		while(1)
		{
			int x; cin>>x;
			if(x==-1) {return 0;}
			if(x==0) break;
			if(2*x <= 100000 && arr[2*x] == true) ans++; // 이전에 x의 2배가 나왔다면 답에 +1 
			if(x%2==0 && arr[x/2] == true) ans++; // 이전에 x의 절반이 나왔다면 답에 +1 
			arr[x] = true;
		}
		cout<<ans<<'\n';
	}
}
