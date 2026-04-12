def find_leaders(arr):
    """
    An element is a leader if it is greater than all elements to its right.
    The rightmost element is always a leader.
    """
    if not arr:
        return []
    
    leaders = []
    # Rightmost element is always a leader
    max_from_right = -float('inf')
    
    # Iterate from right to left
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] > max_from_right:
            leaders.append(arr[i])
            max_from_right = arr[i]
            
    # The leaders are collected from right to left, so reverse them
    return leaders[::-1]

if __name__ == "__main__":
    input_arr = [16, 17, 4, 3, 5, 2]
    print(f"Input:  {input_arr}")
    result = find_leaders(input_arr)
    print(f"Output: {result}")
