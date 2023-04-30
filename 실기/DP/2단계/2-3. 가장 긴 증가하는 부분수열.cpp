#include<bits/stdc++.h>
using namespace std;
int arr[1005], LIS[1005];
int main()
{
	int N; cin>>N;
	for(int i=1; i<=N; i++) cin>>arr[i];
	int ans = 0;
	for(int i=1; i<=N; i++)
	{
		LIS[i] = 1;
		for(int j=1; j<i; j++) 
		{
			if(arr[j] < arr[i]) LIS[i] = max(LIS[i], LIS[j]+1);
		}
		ans = max(ans, LIS[i]);
	}
	cout<<ans;
}
