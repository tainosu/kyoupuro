S = input()

list = [i for i, x in enumerate(S) if x == "#"]
for i in range(0, len(list), 2):
  print(f"{int(list[i]) + 1},{int(list[i + 1]) + 1}")
