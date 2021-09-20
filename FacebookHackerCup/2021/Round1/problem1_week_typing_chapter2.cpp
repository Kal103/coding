#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> PII;
typedef double db;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pct __builtin_popcount

#define P 1000000007

int main() {
	int _;
	cin >> _;
	for (int __ = 1; __ <= _; __++) {
		int n;
		string s;
		cin >> n >> s;
		int S = 0;
		int la = -1;
		for (int i = 0; i < n; i ++) {
			if (s[i] == 'X' || s[i] == 'O') {
				if (la >= 0 && s[la] != s[i]) {
					S = (S+(ll)(la+1)*(n-i)%P)%P;
				}
				la = i;
			}
		}
		printf("Case #%d: %d\n", __, S);
	}
	return 0;
}
