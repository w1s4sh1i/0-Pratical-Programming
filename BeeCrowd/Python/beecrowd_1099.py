A = int(input())
for i in range(A):
    count = 0
    b, c = map(int,input().split(' '))
    b, c = (c,b) if (b > c) else (b,c)
    for j in range(b+1,c):
        count += (j % 2)*j    
    print("%d" %count)
