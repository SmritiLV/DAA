
n = int(input())
Arr =input()

A= [int(x) for x in Arr.split()]
max = -9999
l=0
r=0
for i in range (0,n):
    sum = 0;
    for j in range (0,n):
        if i+j>=n:
            break
        sum = sum+A[i+j]
        if max<sum:
            max = sum
            l = i+1
            r = j+l
print(l,r)
print(max)
