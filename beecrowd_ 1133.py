x,y = int(input()), int(input())
x, y = (y, x) if (x > y) else (x, y)

for i in (x+1, y):
    if (i%5==2 or i%5==3):
        print("%d" %i) 
