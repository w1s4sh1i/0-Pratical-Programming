add = [0,0,0,0]
m = int(input())
for i in range(m):
    data = list(map(str, input().split()))

    add[0] += int(data[0])
    if(data[1]=='C'):
        add[1] += int(data[0])
    elif(data[1]=='R'):
        add[2] += int(data[0])
    else: 
        add[3] += int(data[0])

a = '%'
print("Total: %d cobaias" %add[0])
print("Total de coelhos: %d" %add[1])
print("Total de ratos: %d" %add[2])
print("Total de sapos: %d" %add[3])
print("Percentual de coelhos: %.2lf %c" %(add[1]/(add[0]*1.0)*100.00, a))
print("Percentual de ratos: %.2lf %c" %(add[2]/(add[0]*1.0)*100.00, a))
print("Percentual de sapos: %.2lf %c" %(add[3]/(add[0]*1.0)*100.00, a))

