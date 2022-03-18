#include<bits/stdc++.h>
using namespace std;
int arr[1111];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	for(int i=0; i<n; i++) cin>>arr[i];
	sort(arr, arr+n); 
	//sort 함수를 이용하여 사용자 정의 정렬을 하는 방법 역시 공부해두어야 함
	//sort(arr, arr+n, cmp);
	//예시) bool cmp(int p, int q) {return abs(p) < abs(q);} // 절대값이 작은 것부터 나오도록 정렬 
	for(int i=0; i<n; i++) cout<<arr[i]<<'\n';
}
