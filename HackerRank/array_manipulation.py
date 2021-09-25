n,q=map(int,input().split())

aa=[]
for i in range(n):
  aa.append(0)
#print(a)
for i in range(q):
   a,b,k=map(int,input().split())
   for j in range(a-1,b):
      aa[j]+=k
print(max(aa))
w=[[1,2],[4,5,6]]
print(len(w))
# [1,2,3] [4,5,6] [6,7,8]
