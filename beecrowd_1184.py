acc,count = 0, 0
oper = input()
for linha in range(12):
	for coluna in range(12):
		n = float(input())
		if (linha > coluna):
			acc += n
			count += 1

print("%.1lf" %(acc/count if oper == 'M' else acc))
