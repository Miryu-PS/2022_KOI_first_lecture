#include<bits/stdc++.h>
using namespace std;
//����Ⱑ ��ŷ�� ��, ������ �� ū ��ȣ�� ����Ʈ�� ��ŷ�ϴ� ���� �ּ��̴�.
//Union Find �� Segment tree�� �̿��Ͽ� ������ �ذ��� �� �ִ�.
// ������ Ǯ�̴� Union Find�� �̿��� Ǯ���̸�, Union Find�� ���� ������ �� ��쿡�� ���ͳݿ��� ���� �� Ǯ�̸� ���� ���� ��õ�Ѵ�.
int pa[100005];
int find(int x)
{
	return (x==pa[x]) ? x : (pa[x] = find(pa[x]));
}
void uni(int x, int y) // x<y
{
	pa[y] = x;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); 
	int g,p; cin>>g>>p;
	for(int i=1; i<=g; i++) pa[i]=i;
	for(int i=1; i<=p; i++) 
	{
		int x; cin>>x;
		int dock = find(x); // x�� ������ ����ִ� ���� ����� ����Ʈ ��ȣ find(x)
		if(dock == 0)
		{
			cout<<(i-1); return 0;
		}
		else
		{
			uni(dock-1, dock); // ���� dock�� �� ����⸦ dock-1�� �Ѱܾ��Ѵ�.
		}
	}
	cout<<p;
}
