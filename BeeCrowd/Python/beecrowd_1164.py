soma = 0

n = int(input())

for i in range(n):
    x = int(input())
    for k in range(1, x//2 + 1):
        if (x % k == 0):
            soma += k
    
    print("%d %seh perfeito" %(x, "" if soma == x else "nao ") )
    soma = 0
