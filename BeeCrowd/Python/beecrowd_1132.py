x, y = int(input()),int(input())
x, y = (y,x) if (x > y) else (x,y)
add = 0
for i in range(x,y+1):
    if (not(i%13==0)): 
        add += i

print("%d" %add)
