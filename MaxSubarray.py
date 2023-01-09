def FindMaxCrossSub(A,low,mid,high):
    left_sum=-99999999
    sum =0
    max_left=0
    for i in range(low,mid):
        sum = sum+A[i]
        
        if sum>left_sum:
            left_sum = sum
            max_left = i
    
    right_sum=-99999999
    sum =0
    max_right=0
    for i in range(mid,high):
        sum = sum+A[i]
        
        if sum>right_sum:
            print(sum)
            right_sum = sum
            max_right = i
       
    print(right_sum)   
    return (max_left,max_right,left_sum+right_sum)
 
def FindMaxSub(A,low,high):
    if high==low:
        return (low,high,A[low])
    else:
        mid = [(low+high)/2]
        left_low,left_high,left_sum = FindMaxSub(A,low,mid)
        right_low,right_high,right_sum = FindMaxSub(A,mid+1,high)
        cross_low,cross_high,cross_sum = FindMaxCrossSub(A,low,mid,high)
        if left_sum>=right_sum and left_sum==cross_sum:
            return (left_low,left_high,left_sum)
        elif right_sum>=left_sum and right_sum==cross_sum:
            return (right_low,right_high,right_sum)
        else:
            return(cross_low,cross_high,cross_sum)
A = [5,3,-7,2,-5,6,-7,-8,9]
l,h,s = FindMaxSub(A,0,9)
print(s)
