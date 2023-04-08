#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N; string S; cin>>N>>S;
    int ans = 0;
    for(int i=0; i<N; i++)
    {
        string T; cin>>T;
        bool Tpos = false;
        for(int start = 0; start < T.size(); start++) // start부터 gap칸씩 건너뛰면서 만들어보자 
            for(int gap = 1; start + gap * (S.size()-1) < T.size(); gap++)
            {
                bool samechk = true;
                for(int j=0; j<S.size(); j++)
                {
                    if(S[j] != T[start + gap * j]) samechk = false;
                }
                if(samechk==true) Tpos = true;
            }
        if(Tpos) ans++;
    }
    cout<<ans;
}
