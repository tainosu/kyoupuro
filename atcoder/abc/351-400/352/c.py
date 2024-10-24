N = int(input())

A = []  # 巨人の肩までの高さ
B = []  # 巨人の頭の長さ
for _ in range(N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b - a)

print(sum(A) + max(B))