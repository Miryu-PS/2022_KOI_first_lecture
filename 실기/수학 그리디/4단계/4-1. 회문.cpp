#include<bits/stdc++.h>
using namespace std;
string s;
bool pal(int x, int y) // ���ڿ� s�� x������ y�������� �Ӹ�������� �˻��ϴ� �Լ�
{
	while(x<y)
	{
		if(s[x] != s[y]) return false;
		x++; y--;
	}
	return true; 
} 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	int T; cin>>T;
	while(T--){ // T�� �ݺ��ϴ� �ݺ��� 
		cin>>s;
		int L=0, R=s.size()-1;
		int ans=0;
		while(L<R) // L ~ R ������ �˻��ϱ� ���� L���� R���� ���Ѵ�. 
		{
			if(s[L] != s[R]) // L���� R���� �ٸ��ٸ� ����ȸ���� �Ǳ� ���ؼ��� L+1 ~ R�̳� L ~ R-1 �� �ϳ��� ȸ���̿����Ѵ�. 
			{
				if(pal(L+1, R) || pal(L, R-1)) // ����ȸ���� ��� 
				{
					ans=1; break;  
				}
				else // ȸ���� ����ȸ���� �ƴ� ��� 
				{
					ans=2; break;
				}
			}
			L++; R--;
		}
		cout<<ans<<'\n';
	}
}
