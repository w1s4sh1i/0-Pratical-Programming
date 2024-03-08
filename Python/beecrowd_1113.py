while(True):
    try:
        a, b = map(int,input().split(' '))
        if (a < b or a > b):
            print("%srescente" %('C' if a < b else 'Dec'))
        else:
            break
    except EOFError:
        break  
