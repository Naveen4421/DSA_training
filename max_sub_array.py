def max_sub_array(arr):
    if len(arr)==0:
        return 0
    max_sub=0
    min_array=0
    for i in range(len(arr)):
        min_array=max(arr[i],arr[i]+min_array)
        max_sub=max(max_sub,min_array)
    return max_sub
print(max_sub_array([3,-1,2,-1,-6,3]))
