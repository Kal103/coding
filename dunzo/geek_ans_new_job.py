#code
for t in range(int(input())):
    s=str(input())
    ans=0
    for i in s:
        if i.isupper():
            ans+=1
            break
    for i in s:
        if i.islower():
            ans+=1
            break
    for i in s:
        if i.isdigit():
            ans+=1
            break
    if ans==3:
        print("YES")
    else:
        print("NO")
