add, count, oper = 0, 0, input()

for i in range(12):
	for j in range(12):
		x = float(input())
		if (j > i):
			add += x
			count += 1

print('%.1f' %(add/count if (oper == 'M') else add))
