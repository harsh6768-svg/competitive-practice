#include<bits/stdc++.h>
#define ll long long
#define chl_jldi ios_base::sync_with_stdio(false); cin.tie(0)
#define vi vector<int>
#define v  vector
#define vll vector<ll>
#define pb push_back
#define mod 1000000007
#define null NULL
#define uset unordered_set
#define umap unordered_map
using namespace std;


int main(){  chl_jldi;
	#ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    // For getting input from input.txt file 
    freopen("inputf.in", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("outputf.in", "w", stdout); 
  #endif

ll t;
cin>>t;
while(t--){

int n;
cin>>n;
int cnt[3002]={0};
int temp;
for(int i=0;i<n;i++){
	cin>>temp;
	cnt[temp]++;
}
unordered_set<int> c1;
int c2=0;
for(int i=1;i<3002;i++){
	if(cnt[i]){
		c2++;
		c1.insert(cnt[i]);
	}
}
if(c1.size()==c2) cout<<"Yes\n";
else cout<<"No\n";


}return 0;}
