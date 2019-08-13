from collections import defaultdict
a = input().split()
b = input().split()

mymp = {}
mymp = defaultdict(lambda: 0, mymp)
for word in a:
    for letter in word:
        mymp[str(letter)] += 1

ans = 1
for word in b:
    for letter in word:
        if (mymp[letter] != 0):
            mymp[letter] -= 1
        else:
            ans = 0
            break

print('YES') if ans else print('NO')