while True:
    try:
        n = int(input())
        x = list(map(int,input().split()))
        maior = 0
        for i in x:
            if (i > maior):
                maior = i
        
        print("%d" %(1 if maior<10 else 2 if maior<20 else 3))
    except EOFError:
        break
