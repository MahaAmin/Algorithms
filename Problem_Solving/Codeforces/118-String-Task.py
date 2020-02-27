str = input()
str = str.lower()
str = str.replace("a","")
str = str.replace("o","")
str = str.replace("y","")
str = str.replace("e","")
str = str.replace("u","")
str = str.replace("i","")

l = len(str)

for i in range(l):
    print(".", end="")
    print(str[i], end="")
print()
