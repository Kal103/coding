n=int(input())
import math
s=str(math.factorial(n))
ans=[]
for i in range(len(s)):
   ans.append(int(s[i]))
print(ans)

#T(n)=(n^2)
