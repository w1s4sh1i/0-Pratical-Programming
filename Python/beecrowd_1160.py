n = int(input())
for i in range(n):
    pa, pb, g1, g2 = input().split()
    pa = int(pa)
    pb = int(pb)
    g1 = float(g1)
    g2 = float(g2)
    a = 0
    while (pa <= pb and a <= 100):
        cpa = (pa * g1) // 100
        cpb = (pb * g2) // 100
        pa += cpa
        pb += cpb
        a += 1
    
    print("Mais de 1 seculo." if (a > 100) else ("%d anos." % a))
