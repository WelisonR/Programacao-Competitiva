n = int(input())
s = input()

cont = 0
while "xxx" in s:
    s = s.replace("xxx", "xx", 1)
    cont += 1

print(cont)