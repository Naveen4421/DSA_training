def product(nums):
    n=len(nums)
    result=[1]*n
    left=1
    for i in range(n):
        result[i]=left
        left*=nums[i]
    right =1
    for i in range(n-1,-1,-1):
        result[i]*=right
        right*=nums[i]
    return result


print(product([7,5,2,1]))
        
