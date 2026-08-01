def solution(priorities, location):
    answer = 1
    data = []
    for i in range(len(priorities)):
        data.append([priorities[i],i])
        
    while(data):
        faith = True
        re = data.pop(0)
        for i in range(len(data)):
            if(data[i][0] > re[0]):
                data.append(re)
                faith = False 
                break
        if(faith):
            if( location==re[1]):
                break
            answer+=1
    
    return answer