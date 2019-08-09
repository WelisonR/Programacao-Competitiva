a = input()
la = len(a)

i = 0
while i < la:
    if a[i] == '.':
        print('0', end='')
    else:
        if a[i+1] == '.':
            print('1', end='')
        else:
            print('2', end='')
        i += 1
    i += 1

print('')
