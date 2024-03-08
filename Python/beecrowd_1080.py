index = 0
max_values = int(input())
for i in range(1,100):
    x = int(input())
    if (x > max_values):
        index, max_values = i, x

print("%d\n%d" %(max_values, index+1) )
