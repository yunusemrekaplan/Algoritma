#include <math.h>

bool isPrime(int num) {
  if(num == 2) return true;
  if(num <= 1) return false;
  int a = sqrt(num);
  for(int i=2; i<=a; i++) {
    if(num % i == 0) return false;
  }
  return true;
}