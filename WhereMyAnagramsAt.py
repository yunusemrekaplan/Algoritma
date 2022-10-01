def compare(word, words):
    if len(word) != len(words):
        return 0
            
    size = len(word)
    com1 = {}
    com2 = {}
    
    for i in range(0, size):
        temp = word[i]
        com1[temp] = 0
        temp = words[i]
        com2[temp] = 0
    
    for i in range(0, size):
        temp = word[i]
        com1[temp] += 1
        temp = words[i]
        com2[temp] += 1
    for i in range(0, size):
        char = word[i]
        temp = com1[char]
        control = 0
        for j in words:
            if char == j:
                control = 1
        if control == 0:
            return 0
        if temp != com2[char]:
            return 0
        
    return 1

def anagrams(word, words):
    wordList = []

    for i in words:
        if compare(word,i) == 1:
            wordList.append(i)
    return wordList