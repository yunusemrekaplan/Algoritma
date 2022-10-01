def wave(people):
    s = people
    liste = []
    k = 0

    for i in range(0, len(s)):
        newS = ''
        if s[i] == ' ':
            k += 1
            continue
        else:
            for j in range(0, len(s)):
                if j == k:
                    temp = s[k].upper()
                    newS += temp
                else:
                    newS += s[j]
            liste.append(newS)
            k += 1
    return liste