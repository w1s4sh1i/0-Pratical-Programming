ans = ("primeiro","segundo","terceiro","quarto")
while(1):
    x, y = map(int,input().split())
    if (abs(x) > 0 and abs(y) > 0):
        i = (0 if y > 0 else 3) if (x > 0) else (2 if y < 0 else 1)
        print("%s" %ans[i])
    else:
        break
