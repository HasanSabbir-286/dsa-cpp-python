def decTObinary(decNum):
    answer = 0
    power = 1

    while decNum > 0:
        rem = decNum % 2
        answer += rem * power
        decNum //= 2
        power *= 10

    return answer

n = int(input("Enter a decimal number: "))
print(decTObinary(n))
