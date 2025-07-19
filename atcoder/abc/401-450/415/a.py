N = int(input())
A = list(map(int, input().split()))
X = int(input())

def main():
  for i in range(N):
    if A[i] == X:
      print("Yes")
      return
  
  print("No")
  return

if __name__ == "__main__":
  main()


    