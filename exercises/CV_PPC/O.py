a = int(input())
ans = []

for i in range(a+1):
    print(' '*abs((a-i))*2, end='')
    for j in range((a-abs(a-i))*2+1):
        value = str(i-abs(i-j))
        ans.append(value)
    print(' '.join(ans))
    ans = []
for i in range(a-1, -1, -1):
    print(' '*abs((a-i))*2, end='')
    for j in range((a-abs(a-i))*2+1):
        value = str(i-abs(i-j))
        ans.append(value)
    print(' '.join(ans))
    ans = []

# a = int(input())
# ans = []
# for i in range(a*2+1):
#     print(' '*abs((a-i))*2, end='')
#     for j in range((a-abs(a-i))*2+1):
#         ans.append(str(i-abs(i-j)))
#     print(' '.join(ans))
#     ans = []

# a = int(input())

# for i in range(a*2+1):
#     print(' '*abs((a-i))*2, end='')
#     # try hard lvl +8000 to got the formula bellow, bro
#     # a = 3, for example, it will iterate [0, 6]
#     # 3-|3-0| = 0
#     # 3-|3-1| = 1
#     # 3-|3-2| = 2
#     # 3-|3-3| = 3
#     # 3-|3-4| = 2
#     # 3-|3-5| = 1
#     # 3-|3-6| = 0
#     for j in range((a-abs(a-i))*2+1):
#         value = i-abs(i-j)
#         if (j == 0):
#             print('{}'.format(value), end='')
#         else:
#             print(' {}'.format(value), end='')
#     print('')
