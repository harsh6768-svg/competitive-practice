#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

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
        int x,y;
        cin>>x>>y;
        int money = 0;
        if(x == y)
        {
            money = x;
        }
        else if(x == 0 || y == 0)
        {
            money = 0;
        }
        else
        {
            int num = gcd(x,y);
            x /= num;
            y /= num;
            money = (x>y)?x:y;
            money += (x>y)?y-1:x-1;
            money *= num;
        }
        cout<<money<<endl;
    }
    return 0;
}