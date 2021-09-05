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

void solve()
{
   int m;
   int n;
   cin>>m>>n;
   int a[m][n];
   
   for(int i=0;i<m;++i)
   {
   	for(int j=0;j<n;++j)
   	{
   		cin>>a[i][j];
   	}
   }
   //logic 
   int LtoR=0;
   int RtoL=0;
   for(int i=0;i<m;++i)
   {
   	LtoR+=a[i][i];
   	RtoL+=a[i][m-i-1];
   }
   cout<<abs(RtoL-LtoR);
}

int main()
{
    
       solve();
       cout<<"\n";
	return 0;
}


// time complexity is :- T(n)=O()
