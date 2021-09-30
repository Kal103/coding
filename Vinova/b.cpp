#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int size)
{
    // 5         
    // 1 2 -4 3 9
    // 1<=0+1 =mx=mx+1=1
    //2<=1=mx=2
    //-4<=2-4=2-4=-2
    //3<=-2+3=mx=3
    //9<=3+9=12
	int tmp= 0,ans= INT_MIN; //INT_MIN=-2147483648

	    for (int i = 0; i < size; i++) {
	       
	        // include current element to previous subarray only
	        // when it can add to a bigger number than itself.
	        if (arr[i] <= tmp+ arr[i]) {
	            tmp+= arr[i];
	        }
	       
	        // Else start the max subarry from current element
	        else {
	            tmp= arr[i];
	        }
	        if (tmp>ans)
	            ans=tmp;
	    }
	    return ans;
} // contributed by Vipul Raj


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	cout<<maxSubarraySum(a,n);
	return 0;
}
