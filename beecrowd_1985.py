add, score = 0, {1001:1.5,1002:2.5,1003:3.5,1004:4.5,1005:5.5}
for _ in range(int(input())):
    x, y = map(int, input().split())
    add += score[x]*y

print("%.2f" %add)
