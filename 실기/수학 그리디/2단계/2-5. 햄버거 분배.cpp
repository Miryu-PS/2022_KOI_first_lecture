#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n,k; string s; cin>>n>>k>>s;
	int ans=0;
	// �ִ��� �տ� �ִ� �ܹ��Ÿ� �Դ� ���� �����ϴ�.
	// ���� �ܹ��Ÿ� ���� ���� ���� �� ������ �ִ�.
	for(int i=0; i<n; i++)
	{
		if(s[i] == 'P')
		{
			for(int j=i-k; j<=i+k; j++)
			{
				if(j>=0 && j<n && s[j] == 'H')
				{
					ans++;
					s[j] = 'E';
					break; // ���� ����� �ݺ��� �ϳ� Ż��
				}
			}
		}
	}
	cout<<ans;
}
