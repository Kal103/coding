"""
#convert base>10 to decimal(base 10)
num=str(input())
print(int(num,16))
"""

def toDigits(n, b):
    #Convert a positive number n to its digit representation in base b.
    digits = []
    while n > 0:
        digits.insert(0, n % b)
        n  = n // b
    return digits

def fromDigits(digits, b):
    #Compute the number given by digits in base b.
    n = 0
    for d in digits:
        n = b * n + d
    return n
def convertBase(digits, b, c):
    #Convert the digits representation of a number from base b to base c.
    return toDigits(fromDigits(digits, b), c)

print("digit digitBase convertToBase")
n,digitBase,convertToBase=map(int,input().split())
digit=[]
while n:
  r=n%10
  digit.append(r)
  n=n//10
digit=digit[::-1]
#print(digit)
ans=convertBase(digit,digitBase,convertToBase)
for i in ans:
  print(i,end="")
