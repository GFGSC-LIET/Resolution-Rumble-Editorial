candies = int(input())
n = int(input())

arr = [0] * n
i = 0
distribute = 1

while candies > 0:
    if candies <= distribute:
        arr[i] += candies
        break

    arr[i] += distribute
    candies -= distribute
    distribute += 1
    i += 1
    if i == n:
        i = 0

for j in range(n):
    print(arr[j], end=" ")
