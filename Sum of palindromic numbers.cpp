//CodeChef
//Beginner Practice Problem
//Sum of palindromic numbers [SPALNUM]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long a=0,b=0,s=0;
    cin>>a>>b;

    for(unsigned long long n=a;n<=b;n++)
      {
      unsigned long long c=n,r=0;
      while(c>0)
        {
        unsigned long long temp=0;
        temp=c%10;
        r=r*10+temp;
        c/=10;
        }
      if(n==r) {s+=n;}
      }
    cout<<s<<"\n";
    }
return 0;
}
