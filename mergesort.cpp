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


void merge( int a[], int start, int end){

    int temp[10000];        //Temprory array to store while merging the arrays
    int mid= ( start + end ) / 2; 

    int i= start, j= mid+1, k= start;

    //Compare and fill temp
     while( i<= mid && j<= end ){

        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        
        else{
            temp[k++]=a[j++];
        }
    }

    //Fill remaining elements in temp
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<= end){
        temp[k++]=a[j++];
    }

    //Copy elements of temp in a
    for(int i= start; i<= end; i++){
        a[i]= temp[i];
    }

    return; 
} 

//Implement Merge Sort Function
void mergeSort( int a[], int start, int end){

    //Base Case
    //If start (index) crosses end (index), there are no elements to sort further, thus return
    if( start >= end ){
        return;
    }

    //Find the mid index
    int mid= ( start + end ) / 2;

    //Recursively sort the array in two halves
    //Sort first half
    mergeSort( a, start, mid);
    //Sort second half
    mergeSort( a, mid + 1, end);

    //Merge the sorted halves
    merge( a, start, end);

    return;

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
      int n;                  

    cin>>n;

    int a[n];
   
    
    for(int i= 0; i<n; i++){        //For loop to input n elements into the array
        cin>>a[i];
    }

    //Call the merge sort function on the array - mergeSort( array_name, start, end);
    mergeSort( a, 0, n-1 );

    //Print the sorted array
    for(int i= 0; i< n; i++){
        cout<<a[i]<<" ";
    }

    return 0;

}