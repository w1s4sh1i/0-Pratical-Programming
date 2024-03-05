while True:
    x = int(input())
    if x == 0:
        break
    add, i = 0, 0
    while (i < 5):
        if (x % 2 == 0):
            add += x
            i += 1
        x+=1
        
    print("%d" %add)
