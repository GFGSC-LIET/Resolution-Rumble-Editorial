L, R, X = map(int, input().split())
count = 0

for i in range(L + 1, R):
    num = i
    while num > 0:
        digit = num % 10
        if digit == X:
            count += 1
        num //= 10

print(count)
