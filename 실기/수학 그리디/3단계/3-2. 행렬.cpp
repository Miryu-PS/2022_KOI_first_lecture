#include<bits/stdc++.h>
using namespace std;
int arr[53][53], brr[53][53];
void swit(int x, int y) // (x,y) ~ (x-2, y-2) µÚÁý±â  
{
	for(int i=x-2; i<=x; i++)
		for(int j=y-2; j<=y; j++)
		{
			arr[i][j] = 1 - arr[i][j];
		}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n, m, ans=0; cin>>n>>m;
	for(int i=1; i<=n; i++)
	{
		string s; cin>>s;
		for(int j=1; j<=m; j++) arr[i][j] = s[j-1]-'0';
	}
	for(int i=1; i<=n; i++)
	{
		string s; cin>>s;
		for(int j=1; j<=m; j++) brr[i][j] = s[j-1]-'0';
	}
	for(int i=n; i; i--) for(int j=m; j; j--)
	{
		if(arr[i][j] != brr[i][j]) 
		{
			if(i>=3 && j>=3) {swit(i,j); ans++;}
			else {cout<<-1; return 0;}
		}
	}
	cout<<ans;
}
