def data():
    dia, d = input().split()
    h,m,s = map(int,input().split(":"))
    return [int(d),h,m,s]

x, y = data(), data()
for i in range(len(y)): 
    y[i] -= x[i]

if(y[3]<0):
	y[3], y[2] = y[3]+60, y[2]-1

if(y[2]<0):
    y[2], y[1] = y[2]+60, y[1]-1

if(y[1]<0):
    y[1], y[0] = y[1]+24, y[0]-1

print("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)" %(y[0],y[1],y[2],y[3]))
