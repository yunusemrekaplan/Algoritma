def open_or_senior(data):
    liste = []
    j = 0
    for i in data:
        a = i
        if(a[j] >= 55):
            if(a[j+1] > 7):
                liste.append("Senior")
            else:
                liste.append("Open")
        else:
            liste.append("Open")    
    return liste