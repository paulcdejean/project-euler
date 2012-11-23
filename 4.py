#!/usr/bin/python
answer = 0
answers = []
for a in range(100,1000):
    for b in range(a,1000):
        answer = str(a * b)
        answer_check = True
        n = 0
        while n < len(answer):
            if answer[n] != answer[len(answer) - n - 1]:
                answer_check = False
            n = n + 1
        if answer_check == True:
            answers.append(int(answer))
print max(answers)
