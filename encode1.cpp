// C++ program to find palindromic substrings of a string
#include <bits/stdc++.h>
using namespace std;
 
// Returns total number of palindrome substring of

int main()
{ 
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
    int p,q,sum=0,min=0;

    cin>>p;
    int arr[p];
    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
  
    cin>>q;
    int arr1[q];
    for(int j=0;j<q;j++)
    {
        cin>>arr1[j];
        if(arr1[j]>0)
        {
            sum+=arr1[j];
        }
        if(arr1[j]<min)
        {
            min=arr1[j];
        }
    }
     if(sum+min>=0)
  {
    sum+=min;
  }
  cout<<sum<<endl;
  }
 
}