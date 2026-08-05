def sum(n):
    sum = 0
    for i in range(n + 1):
        sum += i

    return sum

print(sum(int(input("Enter the value of N: "))))