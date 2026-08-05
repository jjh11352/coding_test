import heapq

def solution(jobs):
    jobs.sort()

    answer = 0
    num = len(jobs)
    time = 0
    heap = []

    while jobs or heap:

        while jobs and jobs[0][0] <= time:
            request, duration = jobs.pop(0)
            heapq.heappush(heap, (duration, request))
            
        if(not(heap)):
            time = jobs[0][0]
            continue
        
        duration , request = heapq.heappop(heap)
        time += duration
        answer += (time - request)
            
            
            
    return answer // num