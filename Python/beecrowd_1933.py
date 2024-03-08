while True:
    try:
        a, b = map(int,input().split())
        print("%d" %(a if a>=b else b))
    except EOFError:
        break
