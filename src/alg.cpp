// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (value < 2)
      return false;
    for (int k = 2; k < value; k++) {
      if (value % k == 0) 
        return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t counter = 0;
    uint64_t number = 2; 
    while (counter < n) {
      if (checkPrime(number)) 
        counter++;
      number++;
    }
    return number - 1;
    }

uint64_t nextPrime(uint64_t value) {
    uint64_t number = value + 1;
    while (true) {
      if (checkPrime(number)) 
        return number;
      number++;
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (int k = 2; k < hbound; k++) {
      if (checkPrime(k)) 
        sum += k;
    }
    return sum;
}
