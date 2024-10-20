A, B = map(int, input().split())

count = 0
while True:
    if A > B:
        count += A // B
        A = A % B
        if A == 0:
            print(count-1)
            break
    elif A < B:
        count += B // A
        B = B % A
        if B == 0:
            print(count-1)
            break
    else:
        print(count)
        break