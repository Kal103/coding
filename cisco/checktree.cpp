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

bool checktree(int pre[],int ino[],int pos[],int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return (pre[0]==ino[0] && ino[0]==pos[0]);
	}

	int idx=-1,f=0;
	for(int i=0;i<n;++i)
	{
		if(ino[i]==pre[i])
		{
			idx=i;
			break;
		}
	}

	if(idx!=-1)
	{
		for(int i=0;i<n;++i)
		{
			if(pre[0]==pos[i])
			{
				f=1;
				break;
			}
		}
	}

	if(idx==-1 || f==0)
	{
		return 0;
	}

	int left=checktree(pre+1,ino,pos,idx);
	int right=checktree(pre+1+idx,ino+idx+1,pos+idx,n-idx-1);

	return (left && right);
}


void solve()
{
   int n;
   cin>>n;

   int pre[n];
   int ino[n];
   int pos[n];
   for(int i=0;i<n;++i)
   {
   	cin>>pre[i];
   }
   for(int i=0;i<n;++i)
   {
   	cin>>ino[i];
   }
   for(int i=0;i<n;++i)
   {
   	cin>>pos[i];
   }

   if(checktree(pre,ino,pos,n))
   {
   	cout<<"yes";
   }
   else
   {
   	cout<<"no";
   }
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
       solve();
       cout<<"\n";
    }
	return 0;
}


// time complexity is :- T(n)=O()
/*problem:

*/
