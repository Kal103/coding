ans=0
for i in range(10):
   for j in range(10):
     for k in range(10):
        for l in range(10):
            for m in range(10):
               if(i+j+k+l+m==7):
                  ans+=1
print(ans)
