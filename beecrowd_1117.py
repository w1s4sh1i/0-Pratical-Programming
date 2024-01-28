media = 0.0
count = 0

while(count < 2):
    nota = float(input())
    if (nota < 0 or nota > 10):
        print("nota invalida")
    else:
        media += nota
        count += 1
    
print("media = %.2f" %(media/2.0))
