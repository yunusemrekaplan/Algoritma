def count(string):
    liste2 = {}
    
    for i in string:
        liste2[i] = 0
    for i in string:
        liste2[i] += 1

    return liste2