count, add = 0, 0
tag = input() 

for i in range(12):
    for j in range(12):
        x = float(input())
        if( i > j and j < 11 - i):
            add += x
            count += 1

print("%.1f" %(add if tag == 'S' else add/count) )
