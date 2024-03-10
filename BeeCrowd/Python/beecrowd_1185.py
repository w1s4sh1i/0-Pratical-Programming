count, add = 0.0, 0.0
lim, c = 12, input()
for x in range(lim):
    for y in range(lim):
        n = float(input())
        if (y < lim-1-x):
            add += n
            count += 1

print('%.1lf' %(add if (c=='S') else add/count) )
