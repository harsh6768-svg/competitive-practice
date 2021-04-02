//CodeChef
//Beginner Practice Problem
//Tanu and Head-bob [HEADBOB]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long a=0,y=0,n=0,i=0;
    cin>>a;

    while(a--)
        {
        char g;
        cin>>g;
        if(g=='Y') {y++;}
        else if(g=='N') {n++;}
        else {i++;}
        }
    if(i==0&&y==0) {cout<<"NOT SURE\n";}
    else if(i!=0) {cout<<"INDIAN\n";}
    else {cout<<"NOT INDIAN\n";}
    }
return 0;
}