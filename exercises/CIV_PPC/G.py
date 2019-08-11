n = int(input())
s = input().lower()

vec = [0]*26

for i in s:
    ii = ord(i)-ord('a')
    vec[ii] += 1

ans = 1
for i in vec:
    if i == 0:
        ans = 0

if ans == 1:
    print('YES')
else:
    print('NO')