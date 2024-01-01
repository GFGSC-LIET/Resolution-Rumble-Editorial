n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]

count = 0

for i in range(n):
    for j in range(n):
        if arr[i][j] != arr[n - 1 - i][n - 1 - j]:
            count += 1

print(count // 2)
