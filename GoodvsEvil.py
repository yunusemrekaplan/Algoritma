def good_vs_evil(good, evil):
    goodL = [1, 2, 3, 3, 4, 10]
    evilL = [1, 2, 2, 2, 3, 5, 10]
    good = good.split(" ")
    evil = evil.split(" ")
    sumG = 0
    sumE = 0
    j = 0
    for i in evil:
        if i != " ":    
            sumE = sumE + int(i) * evilL[j]
            j = j + 1
    j = 0
    for i in good:
        if i != " ":
            sumG = sumG + int(i) * goodL[j]
            j = j + 1
    if sumE > sumG:
        return "Battle Result: Evil eradicates all trace of Good"
    elif sumG > sumE:
        return "Battle Result: Good triumphs over Evil"
    else:
        return "Battle Result: No victor on this battle field"