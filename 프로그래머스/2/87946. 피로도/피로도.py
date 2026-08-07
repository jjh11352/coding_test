def solution(k, dungeons):
    answer = -1
    
    re = explore(k, dungeons)
    
    return re


def explore(k, dungeons):
    re = 0
    if(not(dungeons) or k<=0):
        return 0

    for i in range(len(dungeons)):
        sub_re = 0
        data = dungeons.pop(i)
        if(data[0] <= k):
            sub_re+=1
            sub_re += explore(k-data[1], dungeons)
        
        dungeons.insert(i,data)
        
        if(sub_re>re):
            re = sub_re
    
    return re
    
    