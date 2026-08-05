def sum_of_digits(N):
    sum = 0
    while N != 0:
        last_digit = N % 10
        sum += last_digit
        N //= 10
    return sum

n = int(input("Enter a number: "))
print(sum_of_digits(n))
