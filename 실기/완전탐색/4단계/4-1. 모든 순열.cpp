#include<bits/stdc++.h>
using namespace std;
int vst[9], arr[9], N;
void f(int x) // x��° ���� ���ؾ� �ϴ� ��Ȳ
{
    if(x == N)
    {
        for(int i=0; i<N; i++) cout<<arr[i]<<" ";
        cout<<'\n';
    }
    for(int i=1; i<=N; i++)
    {
        if(vst[i] == true) continue;
        vst[i] = true;
        arr[x] = i;
        f(x+1);
        vst[i] = false;
    }
}
int main()
{
    cin>>N;
    f(0);
}
