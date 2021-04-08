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
	  int n, m;
    scanf("%d%d", &n, &m);

    int loc = 1;
    long long int ans = 0;
    for(int i=0; i<m; i++)
    {
        int now;
        scanf("%d", &now);

        if(now >= loc)
            ans += now - loc;
        else
            ans += n - (loc - now);
        loc = now;
    }

    cout << ans << endl;

    return 0;
}