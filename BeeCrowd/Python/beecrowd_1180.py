n = int(input())
data = list(map(int, input().split()))
for i in range(n):
	if (i == 0): 
	    menor = data[i];
	elif (data[i] < menor):
		menor, indicemenor = data[i], i

print("Menor valor: %d\nPosicao: %d" %(menor, indicemenor))
