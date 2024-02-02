def factorial(a, b, c):
    return  factorial(a, b+1, c*(a-b)) if (a-b > 1) else c 

print("%d" %factorial(int(input()),0,1))
