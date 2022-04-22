#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n, x;
	cin >> n >> x;
	vector<int> v(n);
	set<int> s;
	for(int i = 0; i < n; i++) cin >> v[i];
	for(int i = 0; i < n; i++) s.insert(v[i]);

	bool can = false;
	for(int i = 0; i < n; i++) {
		if (s.find(x - v[i]) != s.end()) can = true;
	}
	if(can) cout << "POSSIBLE";
	else cout << "IMPOSSIBLE";
}
