def calcFatorial(n):
    fatorial, i = n, n-1
    if (n == 0 or n == 1): 
        return 1
    while (i > 0):
        fatorial *= i
        i -= 1
    return fatorial

while True:
    try:
        a, b = map(int, input().split())
        print("%d" %(calcFatorial(a) + calcFatorial(b)) )
    except EOFError:
        break
