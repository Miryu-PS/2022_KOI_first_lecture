#include<bits/stdc++.h>
using namespace std;
int main()
{
	int R,B; cin>>R>>B;
	// h*w == R+B
	//(h-2)*(w-2) == B
	//2h+2w-4 == R , h+w == (R+4)/2
	int sum = (R+4)/2;
	int dot = R+B;
	int D = sum*sum - 4*dot;
	int sqrtD = (int) (sqrt(D) + 0.5);
	int w = (sum + sqrtD) / 2;
	int h = (sum - sqrtD) / 2;
	cout<<w<<" "<<h;
}
