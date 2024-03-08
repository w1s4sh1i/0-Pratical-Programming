ans, n = 0, int(input())
while True:
    try:
        x, y = map(int, input().split())
        ans += x * y
    except EOFError:
        break

print("%d" %ans)
