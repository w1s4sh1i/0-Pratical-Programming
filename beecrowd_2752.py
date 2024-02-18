phrase = "AMO FAZER EXERCICIO NO URI"
txt = ''
formatted = ("<%s>","<%30s>","<%.20s>","<%-20s>","<%-30s>","<%.30s>","<%30.20s>","<%-30.20s>")
for i in formatted:
    txt += (i%phrase)+"\n" 
print(txt, end='')
