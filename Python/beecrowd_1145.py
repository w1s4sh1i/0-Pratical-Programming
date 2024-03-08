x,y = map(int, input().split()) 
count = 1
while (count < y+1):
    print(f"{count}", end = " " if (count%x != 0) else "\n")
    count+=1
