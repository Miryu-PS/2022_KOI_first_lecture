#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	set<int> S;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x; S.insert(x);
	}
	cout<<S.size();
}
