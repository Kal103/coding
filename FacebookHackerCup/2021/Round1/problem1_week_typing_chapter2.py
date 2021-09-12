"""
author    : @akash kumar
institute : Moradabad Institute Of Technology
"""

for t in range(1,int(input())+1):
  def subString(s,n):
    ss=[]
    for i in range(n):
      for len in range(i+1,n+1):
        ss.append(s[i:len])
    return ss

  nn=int(input())
  S=str(input())
  """
  SS=0
  for i in S:
    if i=="F":
      SS+=1
  print(SS)
  """
  ss=subString(S,nn)
  #print(ss)
  ans_list=[]
  sss=[]
  for i in ss:
     if len(i)!=1 or len(i)!=2:
       sss.append(i)
  for s in sss:
    n=len(s)

    if n==1 or s=="XF" or s=="XX" or s=="FF" or s=="FX" or s=="OF" or s=="OO" or s=="FO":
      continue
    else:
        ans=[]
        f=-1
        for i in range(n):
           if s[i]=="O":
              f=0
              ans.append(f)
              #print()
           if s[i]=="X":
              #print()
              f=1
              ans.append(f)
        final_ans=0
        for i in range(len(ans)-1):
           if abs(ans[i]-ans[i+1])==1:
             final_ans+=1
        
        ans_list.append(final_ans)
  print("Case #"+str(t)+": ",sum(ans_list)%1000000007)
  
