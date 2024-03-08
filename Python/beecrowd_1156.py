b, S = 1, 0
for i in range(1, 40, 2):
    S += i/b 
    b *= 2

print("%.2lf" %S)
