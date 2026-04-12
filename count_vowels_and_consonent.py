string=input("enter the string: ")
vowels=0
consonents=0
for i in string:
    if i in "aeiouAEIOU":
        vowels+=1
    elif i.isalpha():
        consonents+=1

print("vowels",vowels)
print("consonents",consonents)