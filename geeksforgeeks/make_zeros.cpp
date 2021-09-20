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

void solve()
{
   int n;
   int m;
   cin>>n>>m;

   int matrix[n][m];

   for(int i=0;i<n;++i)   	
   {
   	for(int j=0;j<m;++j)
   	{
   		cin>>matrix[i][j];
   	}
   }

   //logic here 
   int f=0;
   for(int i=0;i<n;++i)
   {
   	for(int j=0;j<m;++j)
   	{
   		if(matrix[i][j]==0)
   		{
   			matrix[i][j]=matrix[i-1][j]+matrix[i+1][j]+matrix[i][j-1]+matrix[i][j+1];
   			matrix[i-1][j]=0;
   			matrix[i+1][j]=0;
   			matrix[i][j-1]=0;
   			matrix[i][j+1]=0;
   			f=1;	
   			break;
   		}
   		if(f)
   		{
   			break;
   		}
   	}
   }

   for(int i=0;i<n;++i)
   {
   	for(int j=0;j<m;++j)
   	{
   		cout<<matrix[i][j]<<" ";
   	}
   	cout<<"\n";
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
       //cout<<"\n";
    }
	return 0;
}


// time complexity is :- T(n)=O()
/*problem:
Make Zeroes 
Easy Accuracy: 55.44% Submissions: 3818 Points: 2
Given a matrix of  size n x m. Your task is to make Zeroes, that means in whole matrix when you find a zero, convert its upper, lower, left, and right value to zero and make that element the sum of the upper, lower, left and right value. Do the following tasks according to the initial matrix.
 

Example 1:

Input: matrix = {{1, 2, 3, 4},
                 {5, 6, 0, 7}, 
                 {8, 9, 4, 6},
                 {8, 4, 5, 2}}
Output: {{1, 2, 0, 4}, 
         {5, 0, 20, 0},
         {8, 9, 0, 6}, 
         {8, 4, 5, 2}}
Explanation: As matrix[1][2] = 0, we will
perform the operation here. Then matrix[1][2]
= matrix[0][2] + matrix[2][2] + matrix[1][1] 
+ matrix[1][3] and matrix[0][2] = matrix[2][2] 
= matrix[1][1] = matrix[1][3] = 0.
Example 2:

Input: matrix = {{1, 2}, 
                 {3, 4}}
output: {{1, 2}, 
         {3, 4}}

Your Task:
You don't need to read or print anything. Your task is to complete the function MakeZeros() which takes the matrix as input parameter and does the given task according to initial matrix. You don't need to return anything. The driver code prints the modified matrix itself in the output.
 

Expected Time Complexity: O(n * m)
Expected Space Complexity: O(n * m)
 

Constraints:
1 ≤ n, m ≤ 100
1 ≤ matrix[i][j] ≤ 100, where 0 ≤ i ≤ n and 0 ≤ j ≤ m

Topic Tags
*/
