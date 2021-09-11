"""
author    : @akash kumar
institute : Moradabad Institute Of Technology
"""

for t in range(1,int(input())+1):
   n=int(input())
   s=str(input())
   L="FX"
   R="FO"
   if n==1 or s=="XF" or s=="XX" or s=="FF" or s==L or s=="OF" or s=="OO" or s==R:
     print("Case #"+str(t)+": ",0)
   else:
   #FOX
     f1,f2=0,0
     for i in range(n-1):
       tmp=s[i]+s[i+1]
       if tmp==L or tmp=="XX" or tmp=="XF":
          f1+=1
       if tmp==R or tmp=="OO" or tmp=="OF":
          f2+=1
       if tmp=="OX" or tmp=="XO":
          f1+=1
          f2+=1
     ans=min(f1,f2)
     print("Case #"+str(t)+": ",ans)
