#include<bits/stdc++.h>
using namespace std;
int arr[13][13];
void swit(int x, int y)
{
	for(int i=1; i<=x; i++)
		for(int j=1; j<=y; j++)
		{
			arr[i][j] = 1 - arr[i][j];
		}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n, ans=0; cin>>n;
	for(int i=1; i<=n; i++)
	{
		string s; cin>>s;
		for(int j=1; j<=n; j++) arr[i][j] = s[j-1]-'0';
	}
	for(int i=n; i; i--) for(int j=n; j; j--)
	{
		if(arr[i][j] == 1) {swit(i,j); ans++;}
	}
	cout<<ans;
}
