#author : @akash kumar
#longest subarray sum algorithm

n=int(input())
a=list(map(int,input().split()[:n]))
ans,tmp_ans=-1000000000,0

# 1 2 -4 3
for i in range(n):
   if a[i]<=a[i]+tmp_ans:
      tmp_ans+=a[i]
   else:
      tmp_ans=a[i]
   ans=max(ans,tmp_ans)
print(ans)

#time complexity T(n)=O(n)
