a = input()
control = 0
for i in a:
    if control < 5 and i == "hello"[control]:
        control += 1

print('YES') if control == 5 else print('NO')