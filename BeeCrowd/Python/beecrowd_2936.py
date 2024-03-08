ans = 225 
vet = (300, 1500, 600, 1000, 150)
for i in range(len(vet)):
    ans += int(input()) * vet[i]

print("%d" %ans)

