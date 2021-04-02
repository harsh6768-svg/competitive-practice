//CodeChef
//Beginner Practice Problem
//Smallest Number of Notes [FLOW005]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

unsigned long long a[6]={100,50,10,5,2,1};

while(t--)
    {
    unsigned long long n=0,d=0;
    cin>>n;

    for(unsigned int j=0;j<6;j++)
        {
        if(n>=a[j])
            {
            n-=a[j];
            d++;
            j--;
            }
        }
    cout<<d<<"\n";
    }
return 0;
}