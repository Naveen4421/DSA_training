def find_pivot_index(arr):
    """
    Finds the index where the sum of elements to the left is equal 
    to the sum of elements to the right.
    """
    total_sum = sum(arr)
    left_sum = 0
    
    for i, val in enumerate(arr):
        # right_sum = total_sum - left_sum - current_value
        if left_sum == (total_sum - left_sum - val):
            return i
        left_sum += val
        
    return -1

if __name__ == "__main__":
    input_arr = [1, 3, 5, 2, 2]
    print(f"Input:  {input_arr}")
    result = find_pivot_index(input_arr)
    print(f"Output: {result}")
