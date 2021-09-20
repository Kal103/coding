def alternatingSort(a):
    n=len(a)
    b=[None]*n
    ii=0
    jj=n-1
    for i in range(n):
        if(i%2==0):
            b[i]=a[ii]
            ii+=1
        else:
            b[i]=a[jj]
            jj-=1
    print(b)
    c=sorted(b,reverse=False)
    print(c)
    if b==c:
        return True
    else:
        return False
a=list(map(int,input().split()))
print(alternatingSort(a))
