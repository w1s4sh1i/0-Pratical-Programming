N = int(input())
indice = 'A' if (N >= 86) else 'B' if (N >= 61 and N <= 85) else 'C' if (N >= 36 and N <= 60) else 'D' if (N >= 1 and N <= 35) else 'E'

print("%c" %indice)
