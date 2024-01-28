ref = ["Alcool","Gasolina", "Diesel"]
score = [0,0,0]
while True:
    i = int(input())
    if (i != 4):
        if (i < 4): 
            score[i - 1] += 1
    else: 
        break

print("MUITO OBRIGADO")
for i in range(3):
    print("%s: %d" %(ref[i],score[i]) )
