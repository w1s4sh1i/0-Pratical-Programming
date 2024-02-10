n, m = map(int,input().split())
while (m>0):
    temp = input()
    n += 1 if temp[0]=='f' else -1
    m-=1

print("%d" %n)
