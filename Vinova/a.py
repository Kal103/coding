def MaxSubarray(arr):
  print(arr)
  n=len(arr)
  a=arr[0]
  b=arr[0]
  for i in range(1,n):
    b=max(arr[i],b+arr[i])
    a=max(a,b)
  print(a)
  return a

# keep this function call here 
print(MaxSubarray(input()))
