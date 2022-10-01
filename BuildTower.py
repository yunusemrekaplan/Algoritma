def tower_builder(n_floors):
    katNum = n_floors
    bosluk = katNum - 1
    yildiz = 1
    s = ''
    liste = []

    for i in range(0,katNum):
        for j in range(0, bosluk):
            s += " "   
        for j in range(0, yildiz):
            s += "*"
        yildiz += 2
        for j in range(0, bosluk):
            s += " "
        bosluk -= 1 
        liste.append(s)
        s = ''
    return liste