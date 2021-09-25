n=int(input())
ans1=0

def B(n):
  a=bin(n).replace("0b", "")
  a=str(a)
  if a==a[::-1]:
     return 1
  else:
    return 0

def D(n):
  n=str(n)
  if n==n[::-1]:
    return 1
  else:
    return 0
#print(B(5))
#print(D(5))
for i in range(1,n+1):

   if(D(i) and B(i)):
      ans1+=i
print(ans1)
