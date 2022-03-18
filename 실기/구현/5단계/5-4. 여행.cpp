#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
    int a,b,n,x,y,mini=INT_MAX;
    cin>>a>>b>>n;
    for(int i=0;i<n;i++){ // i번째 비행기
        cin>>x>>y; // 비용은 x, y개의 도시를 방문한다.
        int m=-1,m1=-1;
        for(int j=0;j<y;j++){
            int t; cin>>t; // 비행기가 j번째로 방문하는 도시 t
            if(t==a) m=j; // m에는 a가 나오는 방문 순서를 저장
            if(t==b) m1=j; // m1에는 b가 나오는 방문 순서를 저장
        }
        if(m!=-1 && m1!=-1 && m <= m1){ // 이 경로가 a,b를 방문했고 순서가 a->b 순서라면
            mini=min(mini,x); // 이 비행기는 답의 후보가 된다.
        }
    }
    if(mini==INT_MAX){ // 만약 mini가 갱신되지 않았다면 여행을 할 수 있는 비행기는 존재하지 않는다.
        cout<<"-1"; 
    }
    else cout<<mini;
}
