count, add = 0, 0

tag = input()

for i in range(12):
    for j in range(12):
        n = float(input())
        if (i < j and i > 11 - j):
            add += n
            count += 1

print('%.1f' %(add/count if tag == 'M' else add) )
