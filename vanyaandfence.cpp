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
    int n,h,sum=0,a;
   cin >> n >> h;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > h) {
            sum+=2;
        }
        else
        	sum+=1;
    }
    cout << sum;
}