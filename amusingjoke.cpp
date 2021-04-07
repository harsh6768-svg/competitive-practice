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
	string a,b,c,s;
	cin>>a>>b>>c;
	s=a+b;
	sort(s.begin(),s.end());
	sort(c.begin(),c.end());
	if(s==c)
	{
		cout<<"Yes"<<endl;
	}
	else
		cout<<"No"<<endl;
}