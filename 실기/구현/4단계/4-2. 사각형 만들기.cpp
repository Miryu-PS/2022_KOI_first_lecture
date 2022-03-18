#include<bits/stdc++.h>
using namespace std;
int arr[4];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=0; i<4; i++) cin>>arr[i];
	sort(arr, arr+4);
	// arr[0]과 arr[1]로 가로를 만들고
	// arr[2]와 arr[3]로 세로를 만드는 것이
	// 가로 arr[0], 세로 arr[2]로 가장 큰 직사각형이 나온다.
	cout << arr[0] * arr[2];
}
