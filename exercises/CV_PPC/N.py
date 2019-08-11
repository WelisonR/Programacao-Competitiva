a = int(input())
print(' '.join(map(str, [a] + [x for x in range(1, a)])))