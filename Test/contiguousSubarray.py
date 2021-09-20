def subarraysCountBySum(a, k, s):
    ans=0
    n=len(a)
    t=0
    ii=1
    while(k+t<=n):
       tmp=[]
       for i in range(t,ii+t):
          tmp.append(a[i])
       print(tmp)
       ii+=1
       if len(tmp)<=k and sum(tmp)==s:
          ans+=1
          t+=1
       else:
         break
    return ans

a=list(map(int,input().split()))
k,s=map(int,input().split())
print(subarraysCountBySum(a, k, s))
