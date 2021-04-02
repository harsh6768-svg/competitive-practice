//CodeChef
//Beginner Practice Problem
//Second Largest [FLOW017]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    vector <unsigned long long> v;
    for(unsigned long long i=0;i<3;i++)
        {
        unsigned long long a=0;
        cin>>a;
        v.push_back(a);
        }
    sort(v.begin(),v.end());
    cout<<v[1]<<"\n";
    }
return 0;
}