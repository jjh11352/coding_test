def solution(name):
    answer = 0
    move = len(name) - 1


    for i in range(len(name)):
        up = ord(name[i]) - ord("A")
        down = ord("Z") - ord(name[i]) + 1

        answer += min(up, down)

        j = i + 1

        while j < len(name) and name[j] == "A":
            j += 1

        right_then_back = i * 2 + len(name) - j
        left_then_back = i + (len(name) - j) * 2

        move = min(move, right_then_back, left_then_back)

    return answer + move

