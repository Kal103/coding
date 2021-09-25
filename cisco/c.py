n=int(input())
a=list(map(float,input().split()))

#b=sorted(a,reverse=False)
ans=0
c=0
for i in range(n):
  ans=ans+a[i]
  if ans<=3.0:
     continue
  else:
      c+=1
      ans=a[i]
print(c)
