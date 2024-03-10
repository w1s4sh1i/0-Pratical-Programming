add, count = 0, 0

op = input()

for lin in range(12):
    for col in range(12):
        n = float(input())
        if (lin < col and col > lin and col < 11-lin):
            add += n
            count += 1

print('%.1f' %(add if op=='S' else add/count) )
