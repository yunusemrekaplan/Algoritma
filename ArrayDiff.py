def array_diff(a, b):
    if b == []:
        return a
    if a == []:
        return []
    liste = []
    control = True
    for i in range(0, len(a)):
        for j in range(0, len(b)):
            if a[i] == b[j]:
                control = False
                break
        if control == True:
            liste.append(a[i])
        control = True
            
    return liste