//CodeChef
//Beginner Practice Problem
//Snape and Ladder [SNAPE]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long b=0,ls=0;
    cin>>b>>ls;
    cout<<sqrt(ls*ls-b*b)<<" "<<sqrt(ls*ls+b*b)<<"\n";
    }
return 0;
}