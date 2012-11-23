#!/usr/bin/python
primes = [2]
n = 3
while len(primes) < 10001:
    isprime = True
    for prime in primes:
        if n % prime == 0:
            isprime = False
    if isprime == True:
        primes.append(n)
    n += 1
print primes[-1]
