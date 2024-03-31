number = int(input())
base = {}
for _ in range(number):
	y = int(input())
	base[y] = (base[y] + 1) if(y in base) else 1

for i in sorted(base.keys()):
	print("%d aparece %d vez(es)" %(i,base[i]))
