n = int(input())
s = input()
ch = s[0]
index = 0

for i in range(1, n):
    if ch >= s[i]:
        ch = s[i]
        index = i

if index == 0:
    print(s)
elif index == n - 1:
    s = ch + s[:n - 1]
    print(s)
else:
    t = s[index + 1:]
    s = ch + s[:index] + t
    print(s)
