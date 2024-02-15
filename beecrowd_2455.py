a, b, c, d = map(int, input().split())
diff = c*d - a*b
print("%d" %(-1 if (diff < 0) else 1 if (diff > 0) else 0))
