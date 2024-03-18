from math import ceil

for i in range(int(input())):
    text = input()
    msg= ''
    for x in text:
        msg += chr(ord(x)+3) if x.isalpha() else x
    msg2 = msg[::-1]
    msg3 = msg2[-ceil(len(msg2)/2):]
    msg = ''
    for y in msg3:
        msg += chr(ord(y)-1)
    
    print(msg2.replace(msg3,msg))
