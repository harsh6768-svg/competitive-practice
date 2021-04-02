//CodeChef
//Beginner Practice Problem 
//Turbo Sort [TSORT]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0,a=0;
cin>>t;

vector <unsigned long long> v;
while(t--)
    {
    cin>>a;
    v.push_back(a);
    }
sort(v.begin(),v.end());

for(unsigned long long i=0;i<v.size();i++)
    {
    cout<<v[i]<<"\n";
    }
return 0;
}