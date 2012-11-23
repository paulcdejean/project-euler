#!/usr/bin/python
answer = 0
primes_file = open("primes.txt", "r")
for line in primes_file:
    if int(line) < 2000000:
        answer += int(line)
print answer
