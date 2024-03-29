repeat = int(input())

for _ in range(repeat):
    sequence = input().strip()

    answer, sign = 0, 0
    for char in sequence:
        if(char == '<'):
            sign += 1
        elif(char == '>' and sign > 0):
            sign -= 1
            answer += 1
    
    print(answer)
