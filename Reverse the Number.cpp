//CodeChef
//Beginner Practice Problem
//Reverse The Number [FLOW007]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long n=0,s=0,a=0;
    cin>>n;
    a=n;

    while(a>0)
        {
        s*=10;
        s+=a%10;
        a/=10;
        }
    cout<<s<<"\n";
    }
return 0;
}