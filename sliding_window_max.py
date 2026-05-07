def dequeu(arr,k):
    #from collections import deque
    #dq=deque()
    left,right=0,k-1
    result=[]
    while right<len(arr):
        max_value=max(arr[left:right+1:])
        result.append(max_value)
        left+=1 
        right+=1
    return result
        
        
