#include<bits/stdc++.h>



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
#define LIMIT 1000000



using namespace std;



void c_p_p()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

}
/* ******* Your Functions Below ******** */



int Min(long long  A[], long long  n) {
        long long  min = 100000;

        // finds the maximum element of the array
        for (long long  i = 0; i < n; i++) {
                if (A[i] < min) {
                        min = A[i];
                }
        }
        return min;
}

int Max(long long  A[], long long  n) {
        long long  max = A[0];

        // finds the maximum element of the array
        for (long long  i = 0; i < n; i++) {
                if (A[i] > max) {
                        max = A[i];
                }
        }
        return max;
}

void CountSort(long long  A[], long long  n) {
        long long  max = Max(A, n);
        long long min = Min(A, n);
        int* count = new int [max- min + 1];

        // initializes the count array with all elements to zero
        for (long long  i = 0; i < n; i++) {
                count[A[i]-min] = 0;
        }

        // updates the count array with frequencies of given numbers
        for (long long  i = 0; i < n; i++) {
                count[A[i]-min]++;
        }

        int k = 0;

        for (int j = max; j >= min; j--)
        {
                for (int i = 0; i < count[j - min]; i++)
                {
                        A[k++] = j;
                }
        }

        delete [] count;
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

        long long  n;
        long long  A[100000];
        
        cin >> n;
     

            // inputs numbers from the user in an array
        for (long long  i = 0; i < n; i++) {
                cin >> A[i];
        }

        CountSort(A, n);

      

        // prints the sorted array
        for (long long  i = n-1; i >=0; i--) {
                cout << A[i] << " ";
        }
        cout << endl;
        return 0;
}

