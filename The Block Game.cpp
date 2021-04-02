//CodeChef
//Beginner Practice Problem
//The Block Game [PALL01]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    string n="";
    cin>>n;
    string str(n);
    reverse(str.begin(),str.end());
    if(n.compare(str)==0) {cout<<"wins\n";}
    else {cout<<"losses\n";}
    }
return 0;
}
