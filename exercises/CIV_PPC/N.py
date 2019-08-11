n = int(input())

i = ans = 19
while(n):
    st = str(i)

    digits = []
    for s in st:
        digits.append(ord(s)-ord('0'))
    
    summ = sum(digits)

    if summ == 10:
        ans = i
        n -= 1
    
    i += 1

print(ans)

# codeforces não aceita arquivos com mais de 65535 caracteres...
# não deu o brute force