#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<numeric>
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
	sort(arr,arr+n);
	vector<int> vect(arr,arr+n);
	cout<<"vector is"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<vect[i]<<" ";
	}
	sort(vect.begin(),vect.end());
	cout<<"the vector after sorting is"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<vect[i]<<" "<<endl;

	}
	//reverse the vectror in c++
	reverse(vect.begin(),vect.end());
	cout<<"after reversig the desires vector the resulatant vector is"<<endl;
	for(int i=0;i<2;i++)
	{
		cout<<vect[i]<<endl;
	}
	cout<<"max element"<<endl;
	cout<<*max_element(vect.begin(),vect.end())<<endl;
	cout<<"min element is"<<endl;
	cout<<*min_element(vect.begin(),vect.end())<<endl;
	cout<<"the summation of the vector elemnt is"<<endl;
	cout<<accumulate(vect.begin(),vect.end(),0)<<endl;
	cout<<"the total occurence of x in vector is"<<endl;
	cout<<count(vect.begin(),vect.end(),6)<<endl;
	find(vect.begin(), vect.end(),98) != vect.end()?
                         cout << "\nElement found"<<endl:
                     cout << "\nElement not found"<<endl;
    //return the first occurence of 65
    auto q=lower_bound(vect.begin(),vect.end(),65);
    //returns the lasdt occurence odf 65
    auto p = upper_bound(vect.begin(),vect.end(),65);
    cout<<"the first position of 65 is "<<endl;
    cout<<q-vect.begin()<<endl;
    cout<<"the last occurence of 65 is"<<endl;
    cout<<p-vect.begin()<<endl;
    //now to remove the desired position of vector
    cout<<"just trying to earse the vector"<<endl;
    vect.erase(vect.begin()+1);
   //after erasing the vector in c++
    for(int i=0;i<n-1;i++)
    {
    	cout<<vect[i]<<endl;
    }

    // Deletes the duplicate occurrences
    vect.erase(unique(vect.begin(),vect.end()),vect.end());
 
    cout << "\nVector after deleting duplicates: ";
    for (int i=0; i< vect.size(); i++)
        cout << vect[i] << " "<<endl;
    // modifies vector to its next permutation order
    next_permutation(vect.begin(), vect.end());
    cout << "\nVector next permutation:\n"<<endl;
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    prev_permutation(vect.begin(), vect.end());
     cout << "\nVector after performing prevpermutation:\n"<<endl;
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
       cout << "Distance between first to max element: ";
    cout << distance(vect.begin(),max_element(vect.begin(), vect.end()));



}