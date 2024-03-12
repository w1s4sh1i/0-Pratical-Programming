score = (6,2,5,5,4,5,6,3,7,6)
n = int(input())

for i in range(n):
    add, value = 0, input()
    for j in value:
        add += score[int(j)]
    print("%d leds" %add)
