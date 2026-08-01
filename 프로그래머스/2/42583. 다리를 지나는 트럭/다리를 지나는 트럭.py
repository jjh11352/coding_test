def solution(bridge_length, weight, truck_weights):
    answer = 0
    now_bridge = []
    now_weight = 0
    
    while(True):
        if(now_bridge):
            if(now_bridge[0][1] == bridge_length):
                now_weight-=now_bridge[0][0]
                now_bridge.pop(0)
                
            for i in now_bridge:
                i[1]+=1
        
        if(truck_weights):
            if(now_weight+truck_weights[0] <= weight 
               and len(now_bridge) < bridge_length):
                now_weight+=truck_weights[0]
                now_bridge.append([truck_weights.pop(0),1])
        answer+=1
        if(not(now_bridge) and not(truck_weights)):
            break
    
    return answer