"""
author    :  @akash kumar
institute :  @Moradabad Institute Of Technology 
"""

n=int(input())
a=list(map(int,input().split()))
m=max(a)
N=max(n,m)
ans=[]
for i in range(N+1):
  ans.append(0)


for i in a:
   ans[i]=ans[i]+1
f=1
for i in a:
   if ans[i]>n//2:
     print(i)
     f=0
     break
if f:
  print(-1)
