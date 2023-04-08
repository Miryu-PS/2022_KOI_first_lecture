#include<bits/stdc++.h>
using namespace std;
int main()
{
	int R,B; cin>>R>>B;
	// h*w == R+B
	//(h-2)*(w-2) == B
	for(int h=3; h*h<=R+B; h++)
	{
		int w = (R+B)/h;
		if((h-2)*(w-2) == B)
		{
			cout<<w<<" "<<h;
			return 0;
		}
	}
}
