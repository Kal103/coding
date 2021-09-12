# Initialize array of dp
dp = [-1 for i in range(10)]

def fib(n):
	if (n <= 1):
		return n;
	global dp;
	
	# Temporary variables to store
	# values of fib(n-1) & fib(n-2)
	first = 0;
	second = 0;

	if (dp[n - 1] != -1):
		first = dp[n - 1];
	else:
		first = fib(n - 1);
	if (dp[n - 2] != -1):
		second = dp[n - 2];
	else:
		second = fib(n - 2);
	dp[n] = first + second;

	# Memoization
	return dp[n] ;

# Driver Code
if __name__ == '__main__':
	n = 9;
	print(fib(n));

# This code contributed by Rajput-Ji
