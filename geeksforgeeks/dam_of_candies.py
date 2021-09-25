def findLongestConseqSubseq(a,n):
        #code here
        if n==1:
          return 1
        else:
          ans=[]
          c=1
          ans.append(0)
          #print(m)
          b=sorted(a,reverse=False)
          #print(b)
          for i in range(n-1):
             if b[i+1]-b[i]==0:
                continue 
             elif(b[i+1]-b[i]==1):
               c+=1
             else:
                ans.append(c)
                c=1
          #print(ans)
          return max(c,max(ans))
          
n=int(input())
a=list(map(int,input().split()))
print(findLongestConseqSubseq(a,n))
#[1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5, 6, 6, 6, 6, 7, 8, 9]
