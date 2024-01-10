count = 0
add = 0
while True:
    try:
        i = float(input())
        if i > 0:
            count+=1
            add += i
    except EOFError:
        break
    
print("%d valores positivos\n%.1f" %(count,add/count))
