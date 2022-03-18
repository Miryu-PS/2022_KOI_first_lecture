#include<bits/stdc++.h>
using namespace std;
int arr[9];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=1; i<=8; i++) cin>>arr[i];
	bool asc = true, des = true; 
	for(int i=2; i<=8; i++)
	{
		if(arr[i-1] < arr[i]) // 증가했다면
		{
			des = false; // descending은 아니다.
		}
		if(arr[i-1] > arr[i]) // 감소했다면
		{
			asc = false; // ascending은 아니다.
		}
	}
	if(asc) cout<<"ascending";
	else if(des) cout<<"descending";
	else cout<<"mixed";
}
	
