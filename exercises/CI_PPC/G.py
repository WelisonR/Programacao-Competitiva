a = input()
u = len([i for i in a if i.isupper()])
l = len(a) - u

if l < u:
    print(a.upper())
else:
    print(a.lower())
