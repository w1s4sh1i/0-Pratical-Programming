A, B, add = int(input()), int(input()), 0
if (A > B):
    A,B = B,A
    
for i in range(A+1,B):
    if i % 2:
        add += i

print("%d" %add)
