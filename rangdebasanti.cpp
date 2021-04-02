#include<bits/stdc++.h>
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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int cnt[3002]={0};
		int temp;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			cnt[temp]++;
		}
		unordered_set<int> c1;
		int c2=0;
		for(int i=1;i<3002;i++)
		{
			if(cnt[i])
			{
				c2++;
				c1.insert(cnt[i]);
			}
		}
		if(c1.size()==c2)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}