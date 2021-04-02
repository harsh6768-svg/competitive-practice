//CodeChef
//Beginner Practice Problem
//Three Way Communication [COMM3]

#include <bits/stdc++.h>
using namespace std;

unsigned long long distance(unsigned long long x1,unsigned long long y1,unsigned long long x2,unsigned long long y2)
{
return abs(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long r=0,x1=0,y1=0,x2=0,y2=0,x3=0,y3=0,d1=0,d2=0,d3=0;

    cin>>r;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    d1=distance(x1,y1,x2,y2);
    d2=distance(x2,y2,x3,y3);
    d3=distance(x1,y1,x3,y3);

    if((d1<=r*r&&d2<=r*r)||(d2<=r*r&&d3<=r*r)||(d1<=r*r&&d3<=r*r)) {cout<<"yes\n";}
    else {cout<<"no\n";}
    }
return 0;
}