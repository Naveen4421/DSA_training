n = int(input("enter the number of elements: "))
arr = []
print("enter the  elements:")
for i in range(n):
    arr.append(int(input(" ")))
target=int(input("enter the target: "))
seen={}
for i,num in enumerate(arr):
    count=target-num
    if count in seen:
        print(i, seen[count])
        break
    seen[num] = i
else:
    print("no such pair found")
