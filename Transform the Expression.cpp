//CodeChef
//Beginner Practice Problem
//Transform the Expression [ONP]

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
    char x,y;
    long long count=0;
    stack <char> st;

    string s="",s1="";
    cin>>s;

    for(long long i=0;i<s.length();i++)
        {
		if(s[i]=='(') {count++;}

        else if(s[i]==')')
            {
			count--;
			x=st.top();
			s1+=x;
			st.pop();
			}

        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
            {
            st.push(s[i]);
            }

        else
            {
		    y=s[i];
		    s1+=y;
		    }
		}
	cout<<s1<<"\n";
    }
return 0;
}
