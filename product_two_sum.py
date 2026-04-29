def psp(arr,d):
    if len(arr)<2:
        return -1
    arr=sorted(arr)
    sum_=arr[0]+arr[1]
    if sum_<=d:
        return arr[0]*arr[1]
    else:
        return 0
        
    
