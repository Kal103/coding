"""
author    : @akash kumar
institute : Moradabad Institute Of Technology
"""

for t in range(1,int(input())+1):
   n=int(input())
   s=str(input())
   L="FX"
   R="FO"
   LF=["FX","XF","XX"]
   RF=["FO","OF","OO"]
   if n==1 or s=="XF" or s=="XX" or s=="FF" or s==L or s=="OF" or s=="OO" or s==R:
     print("Case #"+str(t)+": ",0)
   else:
        #input
        #5
        #1
        #O
        #3
        #XFO
        #5
        #FFOFF
        #10
        #FXXFXFOOXF
        #13
        #XFOFXFOFXFOFX

        #output:
        #Case #1: 0
        #Case #2: 1
        #Case #3: 0
        #Case #4: 2
        #Case #5: 6
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
        
        print("Case #"+str(t)+": ",final_ans)
           
