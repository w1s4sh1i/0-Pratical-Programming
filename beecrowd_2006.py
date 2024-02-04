count = 0
x = int(input())
data = list(map(int,input().split())) 
for i in data:
    count += i==x
print("%d" %count)
