#include <iostream>
#include <list>
#include <algorithm>
#include <numeric>
#include <boost/iterator/counting_iterator.hpp>
#include <boost/utility.hpp>

int main () {
  std::list<int> sieve;
  std::list<int>::iterator tortoise;
  std::list<int>::iterator hare;

  std::copy(boost::counting_iterator<int>(2),
	    boost::counting_iterator<int>(2000000),
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
    if(*tortoise > 1414) {
      break;
    }
    ++tortoise;
  }
  std::cout << accumulate(sieve.begin(), sieve.end(), 0LL) << std::endl;
  return 0;
}
