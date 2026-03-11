from array import *

arr=array('i',[12,23,45,67,65])
target=45
for i in range(len(arr)):
    if arr[i] == target:
        print(f"Found {target} at index: {i}")
        break
else:
    print("not found")