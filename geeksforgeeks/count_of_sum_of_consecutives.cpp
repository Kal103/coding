/*
author    : @akash
institute : @MIT
github    : https://www.github.com/Akash671
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



/*
void solve()
{
    int n;
    cin>>n;

    if(n==1 || n==2)
    {
    	cout<<0;
    }
    else
    {
       //logic here 
       int sq;
       if(n%2==0)
          sq=n/2;
       else
          sq=n/2+1;
       //n=15
       //sq=8
       //int ans=0;
       int c=0;
       for(int i=1;i<=sq-1;++i)
       {
        int ans=i;
       	for(int j=i+1;j<=sq;++j)
       	{
       		ans+=j;
       		if(ans==n)
       		{
       			c++;
       			//cout<<c;
       		}
       		if(ans>n)
       		{
       			break;
       		}
       	}
       }
       cout<<c;
    }
    
    //cout<<sq;
}
T(n)=O(n^2)
*/


void solve()
{
	int n;
	cin>>n;

	//logic here


	int c=0;
	for(int l=1;l*(l+1)<2*n;++l)
	{
	    double a=(1.0*n-(l*(l+1))/2)/(l+1);
	    if(a-(int)a==0.0)
	    {
	    	c++;
	    }
	}
	cout<<c;
}
/*
Approach: The idea is to represent N as a sequence of length L+1 as: 
N = a + (a+1) + (a+2) + .. + (a+L) 
N=(a+a+a+a+....+L+1)+(1+2+3+4+5+.....+L)
=> N = (L+1)*a + (L*(L+1))/2
=> a = (N- L*(L+1)/2)/(L+1) 
We substitute the values of L starting from 1 till L*(L+1)/2 < N 
If we get ‘a’ as a natural number then the solution should be counted.
*/
//T(n)=O(sqrt(n))

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       solve();
       cout<<"\n";
    }
	return 0;
}


// time complexity is :- T(n)=O(n^2)
/*problem:

*/
