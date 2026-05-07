def big(arr):
    res=[-1]*len(arr)
    n=len(arr)
    if n==0:
        return 0
    for i in range(n-1):
        for j in range(i+1,n):
            if arr[i]<arr[j]:
                res[i]=arr[j]
                break
    #res[-1]=-1
    return res
