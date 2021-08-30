/* author : @akash kumar 
   github : https://www.github.com/Akash671
*/
<<<<<<< HEAD

/* 
problem is:-
problem statement link - https://prepinsta.com/tcs-coding-question-1/
*/

#include<iostream>
using namespace std;

=======
problem statement link - https://prepinsta.com/tcs-coding-question-1/
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
>>>>>>> 3e96a3f6a8064ffbe66009790f53771ba41197e0

void solve()
{
    int n;
    cin>>n;
    int t=1;
    int x=0;
    int y=0;
    int d=10;
    while(n--)
    {
       	if(t==1)
       	{
       		x+=d;
       		t=2;
       		d=d+10;
       	}
       	else if(t==2)
       	{
       		y+=d;
       		t=3;
       		d=d+10;
       	}
       	else if(t==3)
       	{
       		x-=d;
       		t=4;
       		d=d+10;
       	}
       	else if(t==4)
       	{
       		y-=d;
       		t=5;
       		d=d+10;
       	}
        else
       	{
       		x+=d;
       		t=1;
       		d=d+10;
       	}
    }
    cout<<x<<" "<<y;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    cout<<"\n";
	return 0;
}


<<<<<<< HEAD
// time complexity is :- T(n)=O(n)
=======
// time complexity is :- T(n)=O()
>>>>>>> 3e96a3f6a8064ffbe66009790f53771ba41197e0
