// C++ program to illustrate the
// element accesser in vector
#include <bits/stdc++.h>
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
  
	vector<int> g1(n);

	for (int i = 0; i < n; i++)
		g1.push_back(i * 10);

	cout << "\nReference operator [g] : g1[2] = " << g1[2];

	cout << "\nat : g1.at(4) = " << g1.at(4);

	cout << "\nfront() : g1.front() = " << g1.front();

	cout << "\nback() : g1.back() = " << g1.back();

	// pointer to the first element
	int* pos = g1.data();

	cout << "\nThe first element is " << *pos;
	return 0;
}
