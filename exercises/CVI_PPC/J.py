from itertools import permutations
happy_increase = []
for i in range(5):
    happy_increase.append([int(x) for x in input().split()])

all_perm = list(permutations([0, 1, 2, 3, 4], 5))
ans = 0
for p in all_perm: # p is str
    p = [int(x) for x in p]
    # 01234
    summ = happy_increase[p[0]][p[1]] + happy_increase[p[1]][p[0]]
    summ += happy_increase[p[2]][p[3]] + happy_increase[p[3]][p[2]]
    # 1234
    summ += happy_increase[p[1]][p[2]] + happy_increase[p[2]][p[1]]
    summ += happy_increase[p[3]][p[4]] + happy_increase[p[4]][p[3]]
    # 234
    summ += happy_increase[p[2]][p[3]] + happy_increase[p[3]][p[2]]
    # 34
    summ += happy_increase[p[3]][p[4]] + happy_increase[p[4]][p[3]]

    if (summ > ans):
        ans = summ

print(ans)