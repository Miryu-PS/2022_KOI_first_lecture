#include <bits/stdc++.h>
using namespace std;
int x,n;
int dp[1000001]; // dp[i]�� i���� ����� ���� �ʿ��� ���� �׼�

int main(void) {
    cin>>x>>n;
    int coin[x]; 
    for(int i=0; i<x; i++) cin>>coin[i];
	dp[0]=0;
	for (int i=1; i<=n; i++) {
		dp[i] = 1000001; // �ʱⰪ ū �� ����
        for (int j: coin) { // j��¥�� ����  
			if (i-j>= 0) 
			{
				dp[i] = min(dp[i], dp[i-j] + 1); // i���� (j�� 1��) + (i - j���� ����� ������ �ּҰ���) �� ����� ���
			}
        }
    }
	if(dp[n] == 1000001) cout<<-1;
	else cout<<dp[n];
}
