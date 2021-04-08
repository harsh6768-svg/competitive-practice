#include<bits/stdc++.h>
using namespace std;


	int kadane(int arr[],int n)
	{
       int max_so_far=arr[0];
       int max_end_here=arr[0];
       for(int i=1;i<n;i++)
       {


        max_end_here=max_end_here+arr[i];
        max_end_here=max(max_end_here,arr[i]);
        max_so_far=max(max_so_far,max_end_here);
	}
	return max_so_far;

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
   
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "" << kadane(arr, n);

    return 0;
}