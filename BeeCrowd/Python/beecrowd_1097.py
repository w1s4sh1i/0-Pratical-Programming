j, i, count = [7,7], 1, 0
while (not(i == 11  and j[1] == 17)):
    print("I=%d J=%d" %(i,j[1]))
    if (count == 2):
        j[0] += 2
        i += 2
        j[1], count = j[0], 0
    else:
        j[1] += -1
        count += 1
