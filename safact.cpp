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
    //long long 
    long long int fact=1;
   
 
  // long long
   long long int n;
   cin>>n;
   
for( long long int i=1;i<=n;++i)
{
    if((fact*i)>10)
    fact=fact%10;
    fact=fact*i;
    if(fact%10==0)
    fact=fact/10;
}
cout<<fact%10<<endl;

return 0;
    
}