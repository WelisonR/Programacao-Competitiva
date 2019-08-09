a = input()
lucky = [i for i in a if i in ['4', '7']]
n = str(len(lucky))

ans = "YES"
for i in n:
    if i not in ['4', '7']:
        ans = "NO"
        break

print(ans)