b, count = 0, 1
for i in range(int(input())):
    a = int(input())
    count += (a!=b) * (i>0)
    b = a
    
print("%d" %count)
