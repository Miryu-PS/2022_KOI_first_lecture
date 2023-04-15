#include<bits/stdc++.h>
using namespace std;
using pci = pair<char, int>;
vector<pci> v[16]; // v[6] <- {S, 5} 6���� 5�� ���ƾ� ��, <-{D, 3} 6���� 3���� �޶���Ѵ�.
int ans = 0;
int N,K;
void dfs(int x, string s)
{
    if(x==N) {ans++; return ;}
    for(char t='A'; t<='C'; t++)
    {
        bool chk=true;
        for(auto i:v[x]) // enhanced for loop
        {
            char c = i.first;
            int y = i.second; // x��(t)�� y�� c ���谡 �־�� ��
            if(c=='D' && s[y] == t) {chk=false;break;}
            if(c=='S' && s[y] != t) {chk=false;break;}
        }
        if(chk)
        {
            dfs(x+1, s+t);
        }
    }
}
int main()
{
    cin>>N>>K;
    for(int i=0; i<K; i++)
    {
        char c; int x,y; cin>>c>>x>>y;
        if(x>y) swap(x,y); // x < y �� �ǵ��� ����
        v[y].push_back({c,x}); // y�� x�� c�� ����
    }
    dfs(0,"");
    cout<<ans;
}
