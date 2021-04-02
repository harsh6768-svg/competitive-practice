#include <iostream>
#include <cmath>
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
    long double a, n, m, temp;
    
    cout.precision(22);
    cin >> n >> m >> a;
    if(m < n)
    {
        temp = m;
        m = n;
        n = temp;
    }
   
    if(a >= m)
    {
        cout << ceil(n/a) << endl;
    }
    else
    {
        cout << ceil(m/a)*ceil(n/a) << endl;
    }
    return 0;
}