#!/usr/bin/python
answer = 600851475143
n = 1
while n < answer:
    if answer % n == 0:
        answer = answer / n
        print answer
    n = n + 1
print answer
