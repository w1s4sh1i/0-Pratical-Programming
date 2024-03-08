score = (2,3,5)

for i in range(int(input()), 0, -1):
    
    aver = 0.0
    nota = list(map(float,input().split(' ')))
    for j in range(len(score)):
        aver += nota[j] * score[j]
    
    print("%.1f" %(aver/sum(score)))
