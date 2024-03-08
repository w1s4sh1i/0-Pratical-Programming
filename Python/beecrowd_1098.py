i, j = 0, 1
value = 0
x,y = 0, 0

while (i < 2.1):
    print("I=%.0f J=%.0f" % (i, j) if (y == 0) else "I=%.1f J=%.1f" % (i, j))

    x += 1
    if (x == 3):
        i += 0.2
        value += 0.2
        j, x = value, 0
        y += 1

    if(y == 5):
        y = 0
    j += 1

