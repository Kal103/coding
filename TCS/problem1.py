#author : @akash kumar

x,y,d,t=0,0,10,1
for n in range(int(input())):
    if t==1:
      x+=d
      t=2
      d+=10
    elif t==2:
       y+=d
       t=3
       d+=10
    elif t==3:
       x-=d
       t=4
       d+=10
    elif t==4:
       y-=d
       t=5
       d+=10
    else:
       x+=d
       t=1
       d+=10
print(x,y)

#Time complexity T(n)=O(n)
