#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    // For getting input from input.txt file 
    freopen("inputf.in", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("outputf.in", "w", stdout); 
  
#endif 
	int i,j,l;
	char s[100];
	cin>>s;
	l=strlen(s);
	for(int i=0;i<l;i+=2)
	{
		for(j=0;j<l-i-2;j+=2)
		{
			if(s[j]>s[j+2])
			{
				swap(s[j],s[j+2]);
			}
		}
	}
	cout<<s<<endl;
	return 0;
}