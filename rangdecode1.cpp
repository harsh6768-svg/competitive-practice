#include<bits/stdc++.h>
using namespace std;
#define MAX 100005


bool prime[MAX];
int prefix[MAX], suffix[MAX];


void precompute(int prefix[], int suffix[])
{
	memset(prime, true, sizeof(prime));

	
	for (int i = 2; i * i < MAX; i++) {
		if (prime[i]) {
			for (int j = i * i; j < MAX; j += i)
				prime[j] = false;
		}
	}

	prefix[1] = 1;
	suffix[MAX - 1] = 1e9 + 7;


	for (int i = 2; i < MAX; i++) {
		if (prime[i])
			prefix[i] = i;
		else
			prefix[i] = prefix[i - 1];
	}

	
	for (int i = MAX - 1; i > 1; i--) {
		if (prime[i])
			suffix[i] = i;
		else
			suffix[i] = suffix[i + 1];
	}
}


int query(int prefix[], int suffix[], int L, int R)
{
	if (prefix[R] < L || suffix[L] > R)
		return -1;
	else
		return prefix[R] - suffix[L];
}

// Driven Program
int main()
{
	  #ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    // For getting input from input.txt file 
    freopen("input.exe", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.exe", "w", stdout); 
  
#endif
	int q ;
	cin>>q;
	int L[q],R[q];
	for(int i=0;i<q;i++)
	{
		cin>>L[i]>>R[i];
	}
	

	precompute(prefix, suffix);

	for (int i = 0; i < q; i++)
		cout << query(prefix, suffix, L[i], R[i]) << endl;

	return 0;
}






