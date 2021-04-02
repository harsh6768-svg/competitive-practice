//CodeChef
//Beginner Practice Problem
//Sums in a Triangle [SUMTRIAN]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
  {
  long long n=0,a[100][100];
  cin>>n;

  for(long long i=0;i<n;i++)
    {
    for(long long j=0;j<=i;j++)
      {
      cin>>a[i][j];
      }
    }

    for(long long i=n-2;i>=0;i--)
      {
      for(long long j=0;j<=i;j++)
        {
        a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
        }
      }
    cout<<a[0][0]<<endl;
    }
return 0;
}
