for t in range(int(input())):

 n,x,y=map(int,input().split())
 a=list(map(int,input().split()))
 b=sorted(a,reverse=False)

 ans=0
 
 for i in range(n):
    if b[i]-x>0:
      break
    elif b[i]-x==0:
      ans+=1
      break
    else:
      ans+=1
      x=x-b[i]
 print(ans+y)
