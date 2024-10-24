S = input()
T = input()
result = []

index = 0
for i in range(len(S)):
    while True:
        if S[i] == T[index]:
            result.append(index + 1)
            index += 1
            break
        else:
            index += 1

print(*result)
