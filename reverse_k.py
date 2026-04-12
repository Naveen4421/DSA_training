def rotate_left(arr, k):
    if not arr:
        return None
    n=0
    for i in range(k, len(arr)):
        arr[n] = arr[i]
        n += 1
    for i in range(k):
        arr[n] = arr[i]
        n += 1
    return arr

if __name__ == "__main__":
    input_arr = [1, 2, 3, 4, 5]
    k = 2
    print(f"Input:  {input_arr}, k={k}")
    
    result = rotate_left(input_arr[:], k)
    print(f"Output: {result}")
