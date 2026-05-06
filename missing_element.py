def remove(arr):
    if len(arr) == 0:
        return []

    arr.sort()
    result = []
    count = 1
    i = 0

    while i < len(arr):
        if count == arr[i]:    
            count += 1
            i += 1
        elif count < arr[i]:   
            result.append(count)
            count += 1
        else:                  
            i += 1

    return result
