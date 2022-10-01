def beeramid(bonus, price):
    totalPrice = 0
    layer = 1
    while totalPrice <= bonus:
        totalPrice += layer * layer * price
        layer += 1
    layer -= 2
    if layer < 0:
        layer = 0
    return layer