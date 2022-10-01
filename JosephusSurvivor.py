def killer(size, index):
    index = index % size
    if index % size == 1:
        return index - 1
    elif index % size == 0:
        return size - 1
    else:
        return index - 1

def josephus_survivor(n,k):
    liste = []
    for i in range(1, n+1):
        liste.append(i)
    index = k
    
    while len(liste) != 1:
        index = killer(len(liste), index)
        liste.pop(index)
        index += k
        
    return liste[0]