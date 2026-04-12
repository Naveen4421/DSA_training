def find_second_largest(numbers):
    if len(numbers) < 2:
        return "List must have at least two numbers"
    
    first = second = float('-inf')
    
    for n in numbers:
        if n > first:
            second = first
            first = n
        elif n > second and n != first:
            second = n
            
    if second == float('-inf'):
        return "There is no second largest (all elements might be the same)"
    
    return second

if __name__ == "__main__":
    test_list = [12, 35, 1, 10, 34, 1]
    print(f"List: {test_list}")
    result = find_second_largest(test_list)
    print(f"The second largest number is: {result}")

    # Another test case
    test_list_2 = [10, 5, 10]
    print(f"\nList: {test_list_2}")
    print(f"The second largest number is: {find_second_largest(test_list_2)}")
