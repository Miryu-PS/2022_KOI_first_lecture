// 그리디 문제
// 가장 기한이 긴 문제부터 보도록 하자.
// 이 문제를 가능한 늦게 끝나도록 배치하는 것이 최선이다. 
#include<bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;
pii arr[1005];
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
    sort(arr, arr+n, [](pii x, pii y){ // 기한이 긴 문제가 맨 앞에 오도록  
        return x.second < y.second;
    });
    int nowtime = 1987654321; // 다음에 보는 일은 언제나 nowtime 이전에 끝나도록 배치해야 한다. 
    for(int i=n-1; i>=0; i--)
    {
        nowtime = min(nowtime, arr[i].second) - arr[i].first; 
        // 이 일은 nowtime과 arr[i].second 이전에 끝나야하므로 min(nowtime, arr[i].second)에 끝나도록 배치해야한다.
		// 그러면 다음에 시작하는 일은 min(nowtime, arr[i].second) - arr[i].first 이전에 끝나도록 배치해야 한다. 
    }
    if(nowtime < 0) nowtime = -1; // 불가능한 경우 -1을 출력한다. 
    cout<<nowtime;
}
