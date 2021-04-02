//CodeChef
//Beginner Practice Problem
//The Lead Game [TLG]

#include <bits/stdc++.h>
using namespace std;

int main()
{
long long t=0,a=0,b=0,l=0,w=1,t1=0,t2=0;
cin>>t;

while(t--)
    {
    cin>>a>>b;
    t1+=a;
    t2+=b;

    if(abs(t1-t2)>l)
        {
        l=abs(t1-t2);

        if(t1>t2) {w=1;}
        else {w=2;}
        }
    }
cout<<w<<" "<<l;
return 0;
}