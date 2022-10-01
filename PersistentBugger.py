def multiple(num):
    mult = 1
    while num > 0:
        temp = num % 10
        num = num // 10
        mult *= temp
    return mult

def persistence(n):
    num = n
    if num < 10:
        return 0
    
    count = 1
    prod = multiple(num)
    while prod > 9:
        count += 1
        prod = multiple(prod)
    return count