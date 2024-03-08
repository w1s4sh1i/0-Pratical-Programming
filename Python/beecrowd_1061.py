def data():
    dia, d = input().split()
    h,m,s = map(int,input().split(":"))
    return [int(d),h,m,s]

def analyse(a,b,x):
	    return (a+x, b-1) if a < 0 else (a,b)
	
score = (24,60,60)
x, y = data(), data()

for i in range(len(y)): 
    y[i] = y[i] - x[i]
    
for i in range(len(y)-1,0,-1):
    y[i],y[i-1] = analyse(y[i],y[i-1], score[i-1])

print("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)" %(y[0],y[1],y[2],y[3]))
