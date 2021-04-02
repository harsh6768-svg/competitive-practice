//CodeChef
//Beginner Practice Problem
//Piece of cake [LCH15JAB]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    string a="";
    cin>>a;
    if(a.length()%2!=0) {cout<<"NO\n"; continue;}
    sort(a.begin(),a.end());

    unsigned long long c=0,max=0;
    for(unsigned long long i=0;i<a.length();i++)
      {
      if(a[i]==a[i+1])
        {
        c++;
        if(c>max) {max=c;}
        }
      else {c=0;}
      }
    if(max+1==a.length()/2) {cout<<"YES\n";}
    else {cout<<"NO\n";}
    }
return 0;
}
