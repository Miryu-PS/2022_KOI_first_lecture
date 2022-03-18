#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=0; i<8; i++) cin>>arr[i];
	int maxans = 0;
	for(int i=0; i<8; i++) // 만약 arr[i]부터 시작해서 4조각을 먹는다면
	{
		int sum = 0;
		for(int j=i; j<i+4; j++) // i번째부터 i+3번째 조각을 먹는다.
		{
			sum += arr[j%8]; // j번째 조각은 arr[j%8]에 위치해있다. 
			//예) 6~9번째 조각은 arr[6,7,8,9]가 아닌 arr[6,7,0,1]에 위치한다.
		}
		if(maxans < sum) maxans = sum;
	}
	cout<<maxans;
}
	
