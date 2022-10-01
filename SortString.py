def sort_string(s):
    word = s
    let = 'abcdefghijklmnopqrstuvwxyz'
    control = 0
    nWord = word.lower()
    liste = []
    word = list(word)
    kat = 0.5

    for i in range(0, len(word)):
        kat += 0.005
        for j in range(0, len(let)):
            if nWord[i] == let[j]:
                liste.append(j + kat)
                control = 1
        if control != 1:
            liste.append(-1)
        control = 0

    for i in range(len(word)):
        for j in range(len(word)):
            if liste[i] != -1 and liste[j] != -1:
                if liste[i] < liste[j]:
                    temp = liste[i]
                    liste[i] = liste[j]
                    liste[j] = temp
                    temp = word[i]
                    word[i] = word[j]
                    word[j] = temp
    word = ''.join(word)
    return word