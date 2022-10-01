def fib(n):
    if n == 1:
        return 0
    if n == 2:
        return 1
    
    ilk = 0
    iki = 1
    sum = 1
    
    for i in range(3, n+1):
        sum = ilk + iki
        ilk = iki
        iki = sum
    return sum