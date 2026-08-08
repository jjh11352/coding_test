from collections import Counter
def solution(clothes):
    answer = 1
    
    n = Counter([clo[1] for clo in clothes])
    
    for value in  n.values():
        answer *= (value+1)
        
    answer-=1
    
    re =  answer
    
    return re