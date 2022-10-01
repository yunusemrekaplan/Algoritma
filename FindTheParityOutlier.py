def find_outlier(integers):
    countC = 0
    countT = 0

    for i in range(0,3):
        if integers[i] % 2 == 0:
            countC += 1
        else:
            countT += 1

    if countC > 1:
        for i in integers:
            if i % 2 != 0:
                return i
    elif countT > 1:
        for i in integers:
            if i % 2 == 0:
                return i