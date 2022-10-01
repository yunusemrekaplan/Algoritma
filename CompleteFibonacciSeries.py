def fibonacci(n):
    if n == 1:
        return [0]
    if n == 0:
        return []
    if n < 0:
        return []
    ilk = 0
    iki = 1
    fib = []
    sum = 0
    fib.append(sum)
    fib.append(sum + 1)
    for i in range(0, n - 2):
        sum = ilk + iki
        ilk = iki
        iki = sum
        fib.append(sum)
    return fib