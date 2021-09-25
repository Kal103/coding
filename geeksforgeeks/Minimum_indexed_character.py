s=str(input())
p=str(input())
ans=0
for i in s:
  ans=0
  for j in p:
     if i==j:
        ans+=1
        break
     else:
         ans+=1
print(ans)
