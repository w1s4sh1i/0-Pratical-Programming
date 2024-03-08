def checkNumber():
    lista = list(map(int,input().split())) 
    data = []
    for i in lista:
        if i > 0:
            data.append(i)
    return data

add = 0
[x, y] = checkNumber()
for i in range(y):
    add += x+i
print("%d" %add)
