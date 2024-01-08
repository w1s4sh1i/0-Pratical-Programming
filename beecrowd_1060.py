count = 0

while True:
    try:
        if float(input()) > 0:
            count+=1
    except EOFError:
        break
    
print("%d valores positivos" %count)
