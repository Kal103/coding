/* author : @akash kumar 
   github : https://www.github.com/Akash671
*/

/* 
problem is:-

*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define pb push_back
#define ld long double
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


/* calculate power in O(Logn) time 
ll power(ll base , ll n)
{
	// initialize ans = 1;
	ll ans = 1;
	while(n>0)
	{
		// whenever power is odd , club it with the ans
		if(n%2)ans = (ans*base)%MOD;
 
		base = (base * base)%MOD; // make base square each time
 
		n>>=1;  // each time divide the power by 2
	}
	return ans;
}
*/

bool solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;++j)
		{
			for(int k=j+1;k<n;++k)
			{
				if(a[i]+a[j]+a[k]==0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       cout<<solve();
       cout<<"\n";
    }
	return 0;
}


// time complexity is :- T(n)=O()
