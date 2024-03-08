cont = 1
z = 0
x = int(input())

while True:
    if (z > x):
        break
    else: 
        z = int(input())
    

soma = x

while True:
    if (soma > z):
        break
    else:
        x += 1
        soma += x
        cont += 1
    
print("%d" %cont)
