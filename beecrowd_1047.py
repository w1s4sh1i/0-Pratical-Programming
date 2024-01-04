a,b,c,d = list(map(int,input().split()))

if ((c*60 + d) - (a*60 + b) > 0):
    minutes = (c*60 + d) - (a*60 + b)
    hours = int(minutes/60)
    minutes -= hours*60
else:
    minutes = 24*60 - ((a*60 + b) - (c*60 + d)) 
    hours = int(minutes/60)
    minutes -= hours*60

print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %(hours, minutes))

