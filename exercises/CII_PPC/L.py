n = int(input())

word = ''
for i in range(n):
    word = input()

    if len(word) > 10:
        print('{}{}{}'.format(word[0], len(word[1:-1]), word[-1]))
    else:
        print(word)