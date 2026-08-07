def solution(numbers):
    numbers = list(numbers)
    prime_numbers = set()

    Prime(numbers, "", prime_numbers)

    return len(prime_numbers)


def Prime(data, current, prime_numbers):

    if current != "":
        n = int(current)

        if is_prime(n):
            prime_numbers.add(n)

    if not data:
        return

    for i in range(len(data)):
        num = data.pop(i)

        Prime(data, current + num, prime_numbers)

        data.insert(i, num)


def is_prime(n):
    if n <= 1:
        return False

    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False

    return True