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
	int n;
	cin>>n;
	long mul=n/4;
	long rem=n%4;
	long ans=0;
	if(n==1)
	{
		ans=20;
	}
	else if(n==2)
	{
		ans=2*(6+5+4+3);
	}
	else if(n==3)
	{
		ans =2*(6+5+4+3)+6+5+4;
	}
	else if(n>=4)
	{
		if(rem==0)
		{
			ans+=4*(6+5)*(mul);
			ans+=4*4;
		}
		else if(rem==1)
		{
			ans+=4*(6+5)*(mul);
			ans+=3*4;
			ans+=6+5+4+3+2;
		}
		else if(rem==2)
		{
			ans+=4*(6+5)*(mul);
			ans+=2*4;
			ans+=2*(6+5+4+3);

		}
		else if(rem==3)
		{
			ans+=4*(6+5)*(mul);
			ans+=4;
			ans+=2*(6+5+4+3)+6+5+4;

		}
	}
	cout<<ans<<endl;
}





}