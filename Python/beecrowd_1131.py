i, aux = [0,0,0,0,0,0], 1
while (aux != 2):
    i[5]+=1
    i[0], i[1] = map(int, input().split())
    i[2] += i[0] > i[1] 
    i[3] += i[0] < i[1]
    if (i[0] == i[1]):
        print("Nao houve vencedor") 
        i[4]+=1 
    aux = int(input("Novo grenal (1-sim 2-nao)\n"))

print("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d" %(i[5], i[2], i[3], i[4]))
print("%s venceu mais" %("Inter" if i[2]>i[3] else "Gremio"))
