def transfer(word):
    if len(word) == 1:
        temp = ord(word)
        if temp < 65:
            return word
    
    nWord = ""
    
    for i in range(1, len(word)):
        nWord += word[i]
    
    nWord += word[0]
    return nWord + 'ay'

def pig_it(text):
    text = text.split()

    for i in range(0, len(text)):
        text[i] = transfer(text[i])

    text = " ".join(text)
    
    return text
