#include<bits/stdc++.h>
#include <iostream>

#include <string>
using namespace std;

int MaxSubarray(int arr[], int size) {
  
  // code goes here
 int max_end=0;
 int max_so=INT_MIN;
  for(int i=0;i<size;++i)
  {
    if(arr[i]<=max_end+arr[i])
    {
      max_end+=arr[i];
    }
    else
    {
      max_end=arr[i];
    }
    if(max_end>max_so)
    {
      max_so=max_end;
    }
  }
  return max_so;

}

int main() { 
   
  // keep this function call here
  int n;
  cin>>n;
  
  int A[n];
  for(int i=0;i<n;++i)
  {
  	cin>>A[i];
  }
  cout << MaxSubarray(A,n);
  return 0;
    
}
