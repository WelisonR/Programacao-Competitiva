INF = 999999

by = int(input())

for i in range(by+1, INF):
    byl = [int(i) for i in str(i)]

    if len(byl) == len(set(byl)):
        print(i)
        break
