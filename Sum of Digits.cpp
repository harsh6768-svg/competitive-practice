//CodeChef
//Beginner Practice Problem
//Sum of Digits [FLOW006]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long s=0,n=0;
    cin>>n;

    while(n>0)
        {
        s+=n%10;
        n/=10;
        }
    cout<<s<<"\n";
    }
return 0;
}