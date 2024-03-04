def output(x, y, ref):
    for i in range(y):
        print("%spar[%d] = %d" %("" if ref else "im", i, x[i]))

k, z = 0, 0
par, impar = [0,0,0,0,0], [0,0,0,0,0]

for i in range(15):
    n = int(input())
    if (n % 2 == 0):
        par[k] = n
        k += 1
        if (k == 5):
            k = 0
            output(par, 5 , 1)
    else:
        impar[z] = n
        z += 1
        if (z == 5):
            z = 0
            output(impar, 5 ,0)

output(impar, z, 0)
output(par, k, 1)
