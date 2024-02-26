add, linha = 0, int(input()) 
aux = 1 if input()=='S' else 12 

for i in range(12):
    for j in range(12):
        elemento = float(input())
        if (i == linha): 
            add += elemento

print('%.1f' %(add/aux))
