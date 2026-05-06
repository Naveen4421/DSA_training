def two(a,b,t):
    d={}
    result=[]
    for i in range(len(a)):
        r=t-a[i]
        if r in b:
            result.append((a[i],r))
    return result
