#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n,p,q,r,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>p>>q>>r;
       if(p+q+r ==2 || p+q+r==3)
       {
       	c++;
       }
    }
    cout<<c<<endl;
}