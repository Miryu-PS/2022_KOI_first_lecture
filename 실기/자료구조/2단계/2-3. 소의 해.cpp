#include<bits/stdc++.h>
using namespace std;
map<string,int> M = {
	{"Ox", 0}, {"Tiger", 1}, {"Rabbit", 2}, {"Dragon", 3},
    {"Snake", 4}, {"Horse", 5}, {"Goat", 6}, {"Monkey", 7},
    {"Rooster", 8}, {"Dog", 9}, {"Pig", 10}, {"Rat", 11}
};
map<string,int> Cow = {{"Bessie", 1200}};

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	while(n--)
	{
		string s[8];
		for(int i=0; i<8; i++) cin>>s[i];
		string tocow = s[0];
		string year = s[4];
		int ye = Cow[s[7]];
		int delta = (s[3] == "previous" ? -1 : 1);
		int goalyear = M[year];
		do{
			ye += delta;
		}while(ye % 12 != goalyear);
		Cow[tocow] = ye;
	}
	cout<<abs(1200 - Cow["Elsie"]);
}
