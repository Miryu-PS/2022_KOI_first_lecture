#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005],dfsres,bfsres;
int vst[1005];
void DFS(int x)
{
    dfsres.push_back(x);
    vst[x]=1;
    for(auto i:v[x])
    {
        if(vst[i] == false) DFS(i);
    }
}
int main()
{
    int N,M,V; cin>>N>>M>>V;
    for(int i=0; i<M; i++)
    {
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=N; i++) sort(v[i].begin(), v[i].end()); // ��������Ʈ ���� -> ���� ��ȣ���� 
    
    DFS(V); // DFS 
    
    memset(vst,0,sizeof(vst));
    
    queue<int> Q; //BFS
    Q.push(V); vst[V] = 1;
    while(!Q.empty()){
        int x=Q.front(); Q.pop();
        bfsres.push_back(x);
        for(auto i:v[x])
        {
            if(vst[i] == 0) {
                vst[i]=1; // Q�� i�� 2���̻� ���� �ʰ� �ϱ� ���� �̸� üũ
                Q.push(i);
            }
        }
    }
    for(auto i:dfsres) cout<<i<<" ";
    cout<<'\n';
    for(auto i:bfsres) cout<<i<<" ";
}
