
password = 2002

while(True):
    try:
        ans = ("Senha Invalida","Acesso Permitido")
        i = int(input()) == password
        print(ans[i])
        if i: break
    except EOFError:
        break  
