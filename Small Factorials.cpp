//CodeChef
//Beginner Practice Problem
//Small Factorials [FLOW018]

#include <bits/stdc++.h>
using namespace std;

unsigned long long factorial(unsigned long long n)
{
if(n==0) {return 1;}
return n*(factorial(n-1));
}

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long n=0;
    cin>>n;
    cout<<factorial(n)<<"\n";
    }
return 0;
}