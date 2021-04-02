//CodeChef
//Beginner Practice Problem
//Primality Test [PRB01]

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

    bool prime_flag=true;
    for(unsigned long long i=2;i<n/2;i++)
      {
      if(n%i==0)
        {
        prime_flag=false;
        break;
        }
      }
    if(prime_flag==true) {cout<<"yes\n";}
    else {cout<<"no\n";}
    }
return 0;
}
