x, y = map(int, input().split())
a = y
for _ in range(x):
	y += int(input())
	if (y < a):
	    a = y
print("%d" %a)
