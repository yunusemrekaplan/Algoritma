def alphabet_position(text):
    text = text.upper()
    let = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    s = ""
    
    if len(text) == 1:
        for i in range(0, len(let)):
            if text == let[i]:
                s += str(i+1)
                return s
    
    if text[-1] == '.' or text[-1] == '!' or text[-1] == '?':
        for i in range(0, len(text)):
            for j in range(0, len(let)):
                if text[i] == let[j]:
                    s += str(j+1)
                    if i != len(text) - 2:
                        s += ' '
                    break
    
    else:
        for i in range(0, len(text)):
            for j in range(0, len(let)):
                if text[i] == let[j]:
                    s += str(j+1)
                    if i != len(text) - 1:
                        s += ' '
                    break
    
    return s