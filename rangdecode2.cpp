#include<bits/stdc++.h>
using namespace std;
int main()
{
	 #ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    // For getting input from input.txt file 
    freopen("input.exe", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.exe", "w", stdout); 
  
#endif
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		while(n!=2 && n>0)
		{
			if(n%5==0 && n>5)
			{
				n=n/5;
				c++;
			}
			else
				
			{
				n=n-3;
				c++;
			}
		}
		if(n!=2)
		{
			cout<<-1<<endl;
		}
		else
			cout<<c<<endl;
	}
}