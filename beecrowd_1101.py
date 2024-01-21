def sequence(x, y, count, text):
    return sequence(x+1, y, count+x, text+str(x)+' ') if x<y else (count+x, text+str(x)+' ')

while(True):
    try:
        a, b =list(map(int,input().split()))
        x, y = min(a,b), max(a,b)
        if(a > 0 and b > 0):
            add, result = sequence(x,y,0,'')
            print('%sSum=%d'%(result,add))
        else:
            break
    except EOFError:
        break
