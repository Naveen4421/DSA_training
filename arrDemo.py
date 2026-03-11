from array import *

arr = array('i', [1, 2, 3, 4, 5])
print(arr)

arr.append(6)
print(arr)

# Fixed typo 'inset' to 'insert'
arr.insert(5, 7) # Index 5 is the position after index 4
print(arr)

arr.pop()
print(arr)

arr.pop(0)
print(arr)