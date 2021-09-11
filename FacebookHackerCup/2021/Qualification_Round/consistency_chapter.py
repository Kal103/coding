#author : @Akash_Kumar

for t in range(1,int(input())+1):
   s=str(input())
   
   s_len=len(s)
   #print(s_len)
   if s_len==1:
      print("Case #"+str(t)+": "+"0")
   else:
    vov='AIOUE'
    vs=""
    cs=""
    n=len(s)
    for i in range(n):
     if s[i] in vov:
        vs+=s[i]
     else:
        cs+=s[i]
    ASCII_SIZE=256        
    def getMax(ss):
      count=[0]*ASCII_SIZE
      mx=-1
      c=''
      for i in ss:
        count[ord(i)]+=1
      for i in ss:
         if mx<count[ord(i)]:
            mx=count[ord(i)]
            c=i
      return c
    mxv=getMax(vs)
    mxc=getMax(cs)
    #print(mxv,mxc)
    #print(mxv)
    cv=0
    cc=0
    for i in vs:
      if i==mxv:
        cv+=1
    for i in cs:
     if i==mxc:
        cc+=1
    #print(cv,cc)        
    vs_size=len(vs)
    cs_size=len(cs)
    #print(vs_size,cs_size)
    if vs_size==0 or cs_size==0:
       if cc==1:
         ans=cs_size
         print("Case #"+str(t)+": "+str(ans))
         #print(1)
       elif cv==1:
         ans=vs_size
         print("Case #"+str(t)+": "+str(ans))
         #print(2)
       elif s==s[::-1]:
           print("Case #"+str(t)+": "+"0")
           #print(3)
       else:
         if vs_size==0:
            ans=min(cs_size,(cs_size-cc)*2)
            print("Case #"+str(t)+": "+str(ans))
            #print(4)
         else:
            ans=min(vs_size,(vs_size-cv)*2)
            print("Case #"+str(t)+": "+str(ans))
            #print(5)
    else:
       ans=min((vs_size+(cs_size-cc)*2),(cs_size+(vs_size-cv)*2))
       print("Case #"+str(t)+": "+str(ans))
       #print("6")
