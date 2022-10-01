import math

def asalMi(num):
    if num < 2:
        return False
    
    number = int(math.sqrt(num))
    for i in range(2, number+1):
        if num % i == 0:
            return False
    return True

def backwards_prime(start, stop):
    sum = 0    
    primes = []

    for i in range(start, stop + 1):
        num = i
        if asalMi(num):
            while num != 0:
                temp = num % 10
                num = num // 10
                sum = sum * 10 + temp
            if asalMi(sum):
                if i != sum:
                    primes.append(i)
            sum = 0
    primes.sort()
    return primes