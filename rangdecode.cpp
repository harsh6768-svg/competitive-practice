#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;
long long mod=1e9+7;
void solve()
{
    int n;
    lli k;
    cin>>n>>k;
    vector<lli> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int index=n-2;
    while(k>0 && index>=0)
    {
        if(arr[index]>2)
        {
            arr[index]-=2;
            k-=(n-1-index);
            if(k>=0)
                arr[n-1]+=2;
            else
                break;
        }
        else
        {
            index--;
        }
    }
    cout<<arr[n-1]<<"\n";
}
int main() {
    
     #ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    // For getting input from input.txt file 
    freopen("input.exe", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.exe", "w", stdout); 
  
#endif
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
