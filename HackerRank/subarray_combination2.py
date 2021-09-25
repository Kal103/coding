#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'maxSubarrayValue' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def sub_lists(my_list):
    subs=[[]]
    for i in range(len(my_list)):
        n=i+1
        while n<=len(my_list):
            sub=my_list[i:n]
            subs.append(sub)
            n+=1
    return subs

def maxSubarrayValue(a):
    n=len(a)
    if n==1:
        return a[0]
    # Write your code here
    ans=sub_lists(a)
    print(ans)
    for i in range(len(ans)):
        aa=ans[i]
        if len(aa)==1:
            return aa[0]
        if len(aa)!=0:
            odd=0
            even=0
            for j in range(len(aa)):
                if(j%2==0):
                    even+=aa[j]
                else:
                    odd+=aa[j]
            return (even-odd)**2
        
a=list(map(int,input().split()))
print(maxSubarrayValue(a))
