#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
/*
�ߵ��� T�� ���� ������� �� ��, 
���� ������ �شٸ� ���� B�� ���� �Һ��� ���� ���� �ּ��̴�. (�񱳿���)
*/
pii ani[40040];
priority_queue<int, vector<int>, greater<int>> cowB; // �ּҰ� �켱����ť
int main()
{
	/* 
	5-2�� ���������� �ҿ� ���� ���� �� �迭���� �ð� ������ �����Ѵ�.
	�� : {T, 1} 
	�� : {A, -B} 
	*/
	
	int C,N; cin>>C>>N;
	for(int i=0; i<C; i++) 
	{
		int T; cin>>T; ani[i] = {T,1};
	}
	for(int i=0; i<N; i++)
	{
		int A,B; cin>>A>>B;
		ani[C+i] = {A, -B};
	}
	sort(ani, ani+C+N); // �ð� ������, �ð��� ���ٸ� ��->�� ������
	int ans = 0;
	// cowB �� ���� �ð��� ������ �ʿ��� �ҵ��� B���� �����ϴ� �ּҰ� �켱���� ť
	for(int i=0; i<C+N; i++)
	{
		while(!cowB.empty() && cowB.top() < ani[i].first) // ���� �ð� ani[i].first ���� ���� B���� cowB���� ����
		{
			cowB.pop();
		}
		if(ani[i].second == 1) // ���̶��
		{
			if(!cowB.empty()) // ������ �ʿ���ϴ� �Ұ� �ִٸ�
			{
				ans++; cowB.pop(); // ��Ī
			}
		}
		else // �Ҷ��
		{
			int timeB = -ani[i].second; // �� �Ҵ� timeB���� ������ ���� �� �ִ�.
			cowB.push(timeB);
		}
	}
	cout<<ans;
}
