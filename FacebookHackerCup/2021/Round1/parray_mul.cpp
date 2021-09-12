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



void solve()
{
   int n;
   cin>>n;
   if(n==0)
   {
   	cout<<0;
   }
   else if(n==1)
   {
   	cout<<1;
   }
   else if(n==2)
   {
   	cout<<2;
   }
   else
   {
   	vector<int>ans;
   	for(int i=0;i<=n;++i)
   	{
   	    int tmp=i;
   		for(int j=0;j<=n;++j)
   		{
   		    tmp+=j;
   			if(tmp==n)
   			{
   				ans.pb(i*tmp);
   			}
   		}
   	}
   	cout<<*max_element(ans.begin(),ans.end());
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
