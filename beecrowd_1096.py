j, i = [7,7], 1
while (not(i == 11 and j[1] == 7)):
    print("I=%d J=%d" %(i,j[1]))
    if (j[1] == 5):
        j[1] = j[0]
        i += 2
    else:
        j[1] -= 1
