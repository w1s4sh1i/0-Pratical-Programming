for i in range(int(input())):
    a, b = map(int, input().split())
    print( "divisao impossivel" if (b == 0) else ("%.1f" %(a/b)) )
