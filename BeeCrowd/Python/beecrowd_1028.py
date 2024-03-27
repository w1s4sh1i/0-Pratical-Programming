for _ in range(int(input())):
	a, b = map(int,input().split())

	while (b != 0):
		answer = a % b
		a = b
		b = answer

	print("%d" %a)
