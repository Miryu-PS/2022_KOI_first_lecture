// �׸��� ����
// ���� ������ �� �������� ������ ����.
// �� ������ ������ �ʰ� �������� ��ġ�ϴ� ���� �ּ��̴�. 
#include<bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;
pii arr[1005];
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
    sort(arr, arr+n, [](pii x, pii y){ // ������ �� ������ �� �տ� ������  
        return x.second < y.second;
    });
    int nowtime = 1987654321; // ������ ���� ���� ������ nowtime ������ �������� ��ġ�ؾ� �Ѵ�. 
    for(int i=n-1; i>=0; i--)
    {
        nowtime = min(nowtime, arr[i].second) - arr[i].first; 
        // �� ���� nowtime�� arr[i].second ������ �������ϹǷ� min(nowtime, arr[i].second)�� �������� ��ġ�ؾ��Ѵ�.
		// �׷��� ������ �����ϴ� ���� min(nowtime, arr[i].second) - arr[i].first ������ �������� ��ġ�ؾ� �Ѵ�. 
    }
    if(nowtime < 0) nowtime = -1; // �Ұ����� ��� -1�� ����Ѵ�. 
    cout<<nowtime;
}
