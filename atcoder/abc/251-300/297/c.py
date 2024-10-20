moji = list(map(int, input().split()))
str_input = [list(input()) for i in range(moji[0])]

for i in range(moji[0]):
    for j in range(moji[1] - 1):
        if str_input[i][j] == 'T' and str_input[i][j+1] == 'T':
            str_input[i][j] = 'P'
            str_input[i][j+1] = 'C'

for i in str_input:
    print(*i, sep="")