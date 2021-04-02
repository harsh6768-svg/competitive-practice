#include<bits/stdc++.h>
#include<vector>
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    vector<int> vect(arr,arr+n);
    cout<<"the size of the array is"<<" "<<vect.size()<<endl;
    cout<<"the capicity of the array is"<<" "<<vect.capacity()<<endl;
    cout<<"the max size of the vector is"<<" "<<vect.max_size()<<endl;
    /*vect.resize(4);
    cout<<vect.size()<<endl;*/
    if(vect.empty()==false)
    {
    	cout<<"the given vectors are not empty"<<endl;

    }
    else
    {
    	cout<<"the given vectors are empty"<<endl;
    }
    vect.shrink_to_fit();
    for(auto it=vect.begin();it!=vect)

}