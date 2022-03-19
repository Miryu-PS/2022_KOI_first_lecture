#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	for(int i=0; i<n; i++) cin>>arr[i];
	/*
	어느 금액 x 이하 금액의 동전들을 다 합쳐도 x가 되지 않을 때, x를 처음으로 만들 수 없다.
	*/
	sort(arr, arr+n);
	int coinsum = 0; // 0~(i-1)번 동전의 금액 합
	for(int i=0; i<n; i++)
	{
		if(coinsum + 1 < arr[i])
		{
			cout << coinsum + 1;
			return 0;
		}
		coinsum += arr[i];
	}
	cout << coinsum + 1;
}
