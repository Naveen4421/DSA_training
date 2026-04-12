def find_pivot_index(arr):
    total_sum = sum(arr)
    left_sum = 0
    for i, val in enumerate(arr):
        if left_sum == (total_sum - left_sum - val):
            return i
        left_sum += val
    return -1

if __name__ == "__main__":
    input_arr = [1, 3,5,2,2]
    result = find_pivot_index(input_arr)
    print(f"Output: {result}")