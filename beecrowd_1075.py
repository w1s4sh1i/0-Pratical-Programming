ans = ("NULL","EVEN","ODD","POSITIVE","NEGATIVE")
for i in range(int(input())):
    x = int(input())
    x = f'{ans[x]}' if x == 0 else f'{ans[1 + abs(x%2)]} {ans[3 + (x < 0)]}'
    print(x)
