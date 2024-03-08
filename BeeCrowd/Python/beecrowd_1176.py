for j in range(int(input())):
    a, b = 0, 1
    n = int(input()) + 1
    for i in range(n):
        if (i < 2): 
            c = i
        else:
            c = a + b
            a = b
            b = c
    print("Fib(%d) = %d" %(n-1,c))
