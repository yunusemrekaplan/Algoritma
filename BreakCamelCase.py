def solution(s):
    let = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    ss = ""
    control = 0
    
    for i in range(0, len(s)):
        for j in range(0, len(let)):
            if s[i] == let[j]:
                control = 1
                break;
        if control == 1:
            ss += ' '
            ss += s[i]
        else: 
            ss += s[i]
        control = 0
        
    return ss