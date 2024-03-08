x = int(input())
rank = (0,1,3,5,10,25,50,100)
for i in range(len(rank)-1):
    if (x > rank[i] and x <= rank[i+1]):
        x = rank[i+1]    
print("Top %d" %x)
