#include<iostream>

unsigned int countBits(unsigned long long n){
    int rem = 0;

    while(n != 0) {
        rem += n % 2;
        n = n / 2;
    }
    return rem;
}   