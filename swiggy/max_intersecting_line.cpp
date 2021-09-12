// CPP program to find maximum intersecting
// points
#include <bits/stdc++.h>
using namespace std;
#define ll long int


// nC2 = (n)*(n-1)/2;
ll countMaxIntersect(ll n)
{
return (n) * (n - 1) / 2;
}

// Driver code
int main()
{
	// n is number of line
	ll n;
	cin>>n;
	cout << countMaxIntersect(n) << endl;
	return 0;
}
