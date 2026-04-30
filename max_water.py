def volume(arr):
    if len(arr)==0:
        return o
    left,right=0,len(arr)-1
    max_water=0
    min_size=0
    while left<right:
        if arr[left]>arr[right]:
            min_size=arr[right]
            total=right-left
            right-=1
        elif arr[right]>arr[left]:
            min_size=arr[left]
            total=right-left
            left+=1
        max_water=max(max_water,min_size*total)
    return max_water
print(volume([6,1,2,3,5]))
        
