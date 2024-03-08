V = [0 ,0 ,0 ,0]
txt = ("par(es)","impar(es)","positivo(s)", "negativo(s)","valor(es)") 
while True:
    try:
        X = int(input())
        V[0] += not (X % 2)
        V[1] += X % 2
        V[2] += X > 0
        V[3] += X < 0
    except EOFError:
        break
    
for i in range(len(V)):
    print("%d %s %s" %(V[i], txt[4], txt[i]) );

