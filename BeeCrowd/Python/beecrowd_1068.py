while True:
    try:
        a, b = 0, input()
        for i in range(len(b)):
            a += b[i]=='('
            a -= b[i]==')'
            if(a < 0):
                break
        print('%scorrect' %('' if a==0 else 'in'))
    except EOFError:
        break
