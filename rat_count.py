def rat_count(arr,r,unit):
    if len(arr)==0:
        return -1
    total=r*unit
    sum_=0
    for i in range(len(arr)):
        sum_+=arr[i]
        if sum_>=total:
            return i+1
    return 0

print(rat_count([2,3,1,4,5,6],4,2))
        
        
