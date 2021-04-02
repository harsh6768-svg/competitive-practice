// C++ code to demonstrate the working of
// apply() and sum()
#include<iostream>
#include<valarray> // for valarray functions
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
	// Initializing valarray
	valarray<int> varr = { 10, 2, 20, 1, 30 };
	
	// Declaring new valarray
	valarray<int> varr1 ;
	
	// Using apply() to increment all elements by 5
	varr1 = varr.apply([](int x){return x=x+5;});
	
	// Displaying new elements value
	cout << "The new valarray with manipulated values is : ";
	for (int &x: varr1) cout << x << " ";
	cout << endl;
	
	// Displaying sum of both old and new valarray
	cout << "The sum of old valarray is : ";
	cout << varr.sum() << endl;
	cout << "The sum of new valarray is : ";
	cout << varr1.sum() << endl;
	cout<<"the min element element of the array is"<<endl;
	cout<<varr.min()<<endl;
	cout<<varr1.min()<<endl;
	  varr1 = varr.shift(2);
      
    // Displaying elements of valarray after shifting
    cout << "The new valarray after shifting is : ";
    for ( int&x : varr1) cout << x << " ";
    cout << endl;
      
    // using cshift() to circulary shift elements to right
    // rotates valarray by 3 position
    varr1 = varr.cshift(-3);
      
    // Displaying elements of valarray after circular shifting
    cout << "The new valarray after circular shifting is : ";
    for ( int&x : varr1) cout << x << " ";
    cout << endl;

	return 0;
	
}
