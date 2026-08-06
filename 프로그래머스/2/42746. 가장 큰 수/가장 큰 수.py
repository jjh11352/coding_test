def solution(numbers):
    answer = ''
    data = []

    for i in numbers:
        data.append(str(i))

    data.sort()

    i = 0

    while i <= len(data) - 2:

        if data[i+1] + data[i] < data[i] + data[i+1]:
            data[i], data[i+1] = data[i+1], data[i]

            if i != 0:
                i -= 2

        i += 1

    for i in range(len(data)):
        answer += data[len(data)-1-i]

    if answer[0] == '0':
        return '0'

    return answer