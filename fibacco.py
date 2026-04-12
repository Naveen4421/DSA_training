n = int(input("enter the number: "))
f, s = 1, 1
for i in range(n):
    print(f, end=" ")
    f, s = s, f + s
print()
