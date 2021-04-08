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



void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

/** @brief function to find all permutations of a given string */
void string_permutations(char str[], int l, int r) {
    int i;
    if (l == r) {
        std::cout << str << " ";
    } else {
        for (int i = l ; i <= r ; i++) {
            swap((str + l), (str + i));
            string_permutations(str, l + 1, r);
            swap((str + l), (str + i));
        }
    }
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



int t,n;
cin>>t;

while(t--)
{
	char str[5];
	cin>>str;
	n=strlen(str);
	string_permutations(str, 0, n-1);
	cout<<endl;


}
return 0;



}