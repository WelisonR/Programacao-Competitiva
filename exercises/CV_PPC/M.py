a = input().lower()

new_s = ''
for i in a:
    if i not in ['a', 'e', 'o', 'u', 'i', 'y']:
        new_s += '.' + i
print(new_s)