a, b = 0, 0 
ref = [10,20]
for i in range(int(input()), 0, -1):
    x = int(input())
    x = (x >= ref[0] and x <= ref[1])
    a += x
    b += not x

print("%d in\n%d out" %(a,b))
