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
int t;
cin>>t;
while(t--)
{
    int n,m,k;
    cin>>n>>m>>k;
    int A[n+1][m+1];
    memset(A,0,sizeof(A));
    g(i,1,n){
        g(j,1,m){
            cin>>A[i][j];
        }
    }
     g(i,1,n){
        g(j,1,m){
            A[i][j]+=A[i][j-1];
        }
    }
     g(j,1,m){
        g(i,1,n){
            A[i][j]+=A[i-1][j];
        }
    }
    int ans=0;
    g(side,1,n){
        g(i,1,n-side+1)
        {
            int low=1;
            int high=m-side+1;
            int mid;
            int p;
            int flag=0;
            while(low<=high)
            {
                mid=high+low/2;
                int s=A[i+side-1][mid+side-1]-A[i+side-1][mid-1]-A[i-1][mid+side-1]+A[i-1][mid-1];
                if(s>=k*side*side){
                    high=mid-1;
                    p=mid;
                    flag=1;
                }
                else
                {
                    low=mid+1;
                }
            }
            if(flag==1)
            {
                ans+=(m-side-p+2);
            }
        }
    }
    cout<<ans<<endl;

}
return 0;

}