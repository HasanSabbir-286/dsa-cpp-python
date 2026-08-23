def get_fibb_num(n):
    if n == 0:
        return 0

    if n == 1:
        return 1

    first = 0
    second = 1

    for _ in range(2, n + 1):
        next = first + second
        first = second
        second = next
    
    return second

n = int(input("Enter the value of N: "))
print(get_fibb_num(n))