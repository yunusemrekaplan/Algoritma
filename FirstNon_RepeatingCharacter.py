def first_non_repeating_letter(string):
    word = string
    if word == "":
        return ""
    if len(word) == 1:
        return word[0]
    wordL = word.lower()
    liste = []
    control = 1
    outListe = []
    
    for i in range(0, len(word)):
        for j in range(i + 1, len(word)):
            if wordL[i] == wordL[j]:
                control = 0
                temp = wordL[i]
                liste.append(temp)
                break
            for k in range(0, len(liste)):
                if wordL[i] == liste[k]:
                    control = 0
                    break
        if control == 1:
            outListe.append(word[i])
        control = 1
        
    if len(outListe) == 1:
        return ""
    else:
        return outListe[0]