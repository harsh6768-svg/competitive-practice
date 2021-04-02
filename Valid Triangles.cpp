//CodeChef
//Beginner Practice Problem
//Valid Triangle [FLOW013]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long a=0,b=0,c=0;
    cin>>a>>b>>c;

    if(a+b+c==180&&a!=0&&b!=0&&c!=0) {cout<<"YES\n";}
    else {cout<<"NO\n";}
    }
return 0;
}