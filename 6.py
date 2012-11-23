#!/usr/bin/python
square_of_sum = sum(range(101)) ** 2
sum_of_squares = 0
for n in range(101):
    sum_of_squares += n ** 2
print "The sum of the squares =", sum_of_squares
print "The square of sum =", square_of_sum
