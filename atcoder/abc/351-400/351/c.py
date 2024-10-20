N = int(input())
A = list(map(int, input().split()))

balls = []
for i in range(N):
    balls.append(A[i])
    while True:
        if len(balls) <= 1 or balls[-1] != balls[-2]:
            break
        else:
            ball = balls.pop(-1)
            del balls[-1]
            balls.append(ball + 1)
print(len(balls))