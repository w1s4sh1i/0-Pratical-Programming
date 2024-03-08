k = 20
x = [0] * k
for i in range(k,0,-1): 
    x[i-1] = int(input())
for i in range(0,k): 
    print("N[%d] = %d" %(i, x[i]))
