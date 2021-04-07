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
	int i,n,m;
	cin>>n>>m;
	if(n>m)
	{
		i=m;

	}
	else
		i=n;
	if(i%2==0)
	{
		cout<<"Malvika"<<endl;
	}
	else
	{
		cout<<"Akshat"<<endl;
	}
}