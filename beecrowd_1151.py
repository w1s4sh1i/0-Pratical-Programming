
n = int(input())
a, b = 0, 1

if (n < 2):
  print("%d" %a)
else:
    print("%d" %a, end=" ")
    for i in range(2,n):
        print("%d" %b, end=" ")
        a, b = b, a+b
    
    print("%d" %b)
