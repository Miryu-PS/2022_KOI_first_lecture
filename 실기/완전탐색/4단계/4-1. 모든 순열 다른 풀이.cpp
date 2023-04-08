#include<bits/stdc++.h>
using namespace std;
int arr[10];
bool next_permu(int n)
{
	int i = n-1;
	while(i>0 && arr[i-1] > arr[i]) i--;
	if(i==0) return false;
	int j = n-1;
	while(arr[i-1] >= arr[j]) j--;
	swap(arr[i-1], arr[j]);
	int k = n-1;
	while(i<k) swap(arr[i++], arr[k--]);
	return true;
}
int main()
{
	int n; cin>>n;
	for(int i=0; i<n; i++) arr[i]=i+1;
	do{
		for(int i=0; i<n; i++) cout<<arr[i]<<" ";
		cout<<'\n';
	}while(next_permu(n));
}
