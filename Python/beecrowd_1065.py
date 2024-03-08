count= 0
while True:
  try:
    count += not int(input())%2
  except EOFError:
    break
print("%d valores pares" %count)
