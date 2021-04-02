//CodeChef
//Beginner Practice Problem
//The Smallest Pair [SMPAIR]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long n=0;
    cin>>n;

    vector <unsigned long long> v;
    for(unsigned long long i=0;i<n;i++)
        {
        unsigned long long a=0;
        cin>>a;
        v.push_back(a);
        }
    sort(v.begin(),v.end());
    cout<<v[0]+v[1]<<"\n";
    }
return 0;
}