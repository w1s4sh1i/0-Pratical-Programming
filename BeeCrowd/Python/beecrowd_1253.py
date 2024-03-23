qte = int(input())

for i in range(qte):
    text, qte  = input(), int(input())
    text_new = ''
    for j in text:
        pos = ord(j)-qte
        text_new += chr(91-(65-pos)) if(pos < 65) else chr(ord(j)-qte)
    print(text_new)
