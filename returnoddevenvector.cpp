// C++ code to demonstrate the working of
// partition_copy()
#include<iostream>
#include<algorithm> // for partition algorithm
#include<vector> // for vector
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
    int f;
    cin>>f;
    int arr[f];
    for(int i=0;i<f;i++)
    {
    	cin>>arr[i];
    }
	// Initializing vector
	vector<int> vect (arr,arr+f);
	
	// Declaring vector1
	vector<int> vect1;
	
	// Declaring vector1
	vector<int> vect2;
	
	// Resizing vectors to suitable size using count_if() and resize()
	int n = count_if (vect.begin(), vect.end(), [](int x)
	{
		return x%2==0;
		
	} );
	vect1.resize(n);
	vect2.resize(vect.size()-n);
	
	// Using partition_copy() to copy partitions
	partition_copy(vect.begin(), vect.end(), vect1.begin(),
									vect2.begin(), [](int x)
	{
		return x%2==0;
	});
	
	
	// Displaying partitioned Vector
	cout << "The elements that return true for condition are : ";
	for (int &x : vect1)
			cout << x << " ";
	cout << endl;
	
	// Displaying partitioned Vector
	cout << "The elements that return false for condition are : ";
	for (int &x : vect2)
			cout << x << " ";
	cout << endl;
	
	return 0;
}
