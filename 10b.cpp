#include <iostream>
#include <list>
#include <algorithm>
#include <numeric>
#include <boost/iterator/counting_iterator.hpp>
#include <boost/utility.hpp>
#include <cmath>

const int smallest_prime = 2;
const int goal = 2000000;
const int finish = ceil(sqrt(goal));

int main () {
  std::list<int> sieve;
  std::list<int>::iterator tortoise;
  std::list<int>::iterator hare;

  std::copy(boost::counting_iterator<int>(smallest_prime),
	    boost::counting_iterator<int>(goal),
	    std::back_inserter(sieve));
  
  tortoise = sieve.begin();  
  while(tortoise != sieve.end()) {
    hare = tortoise;
    while(++hare != sieve.end()) {
      if(*hare % *tortoise == 0) {
	--hare;
	sieve.erase(boost::next(hare));
      }
    }
    if(*tortoise > finish) {
      break;
    }
    ++tortoise;
  }
  std::cout << accumulate(sieve.begin(), sieve.end(), 0LL) << std::endl;
  return 0;
}
