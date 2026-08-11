def solution(n, lost, reserve):
    answer = n - len(lost) 
    
    same = list(set(lost) & set(reserve))
    lost = [x for x in lost if x not in same]
    reserve = [x for x in reserve if x not in same]
    answer += len(same)
    
    lost.sort()
    reserve.sort()
    i=0
    j=0
    while(i < len(lost) and j< len(reserve)):
        if(abs(lost[i] - reserve[j]) <= 1):
            answer+=1
            i+=1
            j+=1
            continue
        elif(lost[i]+1 < reserve[j]):
            i+=1
        else:
            j+=1
        
    
    return answer