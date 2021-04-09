#include <bits/stdc++.h>



#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             LONG_LONG_MAX
#define ps(x,y)         fixed<<setprecision(y)<<x
#define endl            '\n'
#define mk(arr,n,type)  type *arr=new type[n]
#define w(x)            int x; cin >> x; while(x--)
#define f(i,x,y)        for(int i = x; i < y; i++)
#define g(i,x,y)        for(int i = x;i<=y;i++)



using namespace std;



void c_p_p()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

}
/* ******* Your Functions Below ******** */

int no_of_arithemetic_slices(int a[],int n)
{
    if(n<3)
        return 0;
    vector <int> dp(n,0);
    f(i,2,n)
    {
        if(a[i]-a[i-1]==a[i-1]-a[i-2])
        {
            if(dp[i-1]>0)
            {
                dp[i]=dp[i-1]+1;
            }
            else
            {
                dp[i]++;
            }
        }
    }
    int ans=0;
    f(i,0,dp.size())
    {
        ans+=dp[i];
    }
    return ans;
}













/* ******* Your Functions Above ******** */

int32_t main()
{
	c_p_p();
	#ifndef ONLINE_JUDGE
	// For getting input from input.txt file 
    // For getting input from input.txt file 
    freopen("input.exe", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.exe", "w", stdout); 
#endif





int n=0;
cin>>n;
int arr[n];
f(i,0,n)
{
   int temp=0;
   cin>>temp;
   arr[i]=temp;
}

cout<<no_of_arithemetic_slices(arr,n)<<endl;
return 0;

}