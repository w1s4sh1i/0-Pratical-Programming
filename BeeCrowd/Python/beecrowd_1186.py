add, count, tag = 0, 0, input()

for lin in range(12):
    for col in range(12):
        n = float(input())
        if (col > 11-lin):
            add += n
            count += 1

print('%.1f' %(add/count if tag == 'M' else add))
