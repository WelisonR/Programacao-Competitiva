a = input().split('+')
a = sorted(a)

print(a[0], end='')
for i in range(1, len(a)):
    print('+{}'.format(a[i]), end='')
print()