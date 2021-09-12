#author : @akashs 

for _ in range(int(input())):
   def power(x,n):
      res=1
      while(n):
         if n & 1:
            res=res*x
         x=x*x
         n>>=1
      return res
   def ans(n):
      tmp_ans=0
      if n==2:
        return 1
      elif n==3:
        return 2
      elif n%3==0:
        tmp_ans=power(3,int(n/3))
        return tmp_ans
      elif n%3==1:
        tmp_ans=2*2*power(3,int(n/3)-1)
        return tmp_ans
      elif n%3==2:
        tmp_ans=2*power(3,int(n/3))
        return tmp_ans
   print(ans(int(input())))
