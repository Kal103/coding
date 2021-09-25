s=str(input())
ans=[]
tmp=""
for i in s:
 if i==" ":
    ans.append(tmp)
    tmp=""
 else:
   tmp+=i
ans.append(tmp)
ans2=[]
for i in ans:
   if i.isdigit():
     continue
   else:
      ans2.append(i)

#print(ans2)
ans3=[]
for a in ans2:
  tmp=""
  f=1
  for j in range(len(a)-1):
     if a[j].isalpha() or a[j]=='-':
       tmp+=a[j]
       #print(tmp,end=" ")
     else:
       f=0
       break
  if f:
     #print(tmp)
     #print(a,end=" ")
     tmp+=a[len(a)-1]
     #print(a[len(a)-1])
     #print(tmp)
     ans3.append(tmp)
#print(ans3)
c=0
for i in ans3:
   l=len(i)
   if i[l-1].isalpha() or i[l-1]=='.' or i[l-1]==',' or i[l-1]=='!' or i[l-1]=='?':
      c+=1
print(c)
