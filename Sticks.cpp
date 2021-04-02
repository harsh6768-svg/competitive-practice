//CodeChef
//Beginner Practice Problem
//Sticks [Sticks]

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t=0;
cin>>t;

while(t--)
    {
    long long n=0,area=1,c=0;
    cin>>n;

    vector <long long> v(n);
    for(long long i=0;i<n;i++) {cin>>v[i];}
    sort(v.begin(),v.end());

    for(long long i=v.size()-1;i>0;i--)
        {
        if(v[i]==v[i-1])
            {
            area*=v[i];
            c++;
            i--;
            }
        if(c==2) {break;}
        }

    if(c==2) {cout<<area<<"\n";}
    else {cout<<"-1\n";}
    }
return 0;
}
