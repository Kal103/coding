/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

int LargestFour(int arr[], int arrLength) {
  
  // code goes here  
  sort(arr,arr+arrLength);

  int ans=0;
  for(int i=0;i<4;++i)
  {
    ans+=arr[arrLength-i-1];
  }
  int ans2=0;
  for(int i=0;i<arrLength;++i)
  {
    ans2+=arr[i];
  }
//  cout<<ans<<" "<<ans2;
  if(ans>ans2)
  {
    return ans;
  }
  return ans2;

}

int main(void) { 
   
  // keep this function call here
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;++i)
  {
  	cin>>a[i];
  }
  cout << LargestFour(a,n);
  return 0;
    
}
