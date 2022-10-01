def sort_by_guide(arr, guide):
    myAr = arr

    for i in range(0, len(guide)):
        if guide[i] == -1:
            continue
        else:
            for j in range(i, len(guide)):
                for k in range(j, len(guide)):
                    if guide[j] == -1:
                        continue
                    elif guide[i] > guide[j]:
                        temp = guide[i]
                        guide[i] = guide[k]
                        guide[k] = temp
                        temp = myAr[i]
                        myAr[i] = myAr[k]
                        myAr[k] = temp
                        break
                
    return myAr