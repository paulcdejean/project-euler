#!/usr/bin/python
answer = 0
fibo = [1, 2]
while fibo[1] < 4000000:
    next_item = sum(fibo)
    fibo[0] = fibo[1]
    fibo[1] = next_item
    if fibo[0] % 2 == 0:
        answer += fibo[0]
print answer
