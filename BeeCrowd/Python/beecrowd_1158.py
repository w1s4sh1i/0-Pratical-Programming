add = 0

for n in range(int(input()), 0, -1):

    x, y = map(int,input().split())

    while (y > 0):
        
      if (x % 2):
        add += x
        y -= 1
      x+=1

    print("%d" %add)
    add = 0
