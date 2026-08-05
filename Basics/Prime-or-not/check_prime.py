import math

def check_prime(N):
    for i in range(2, int(math.sqrt(N)) + 1):
        if N % i == 0:
            return False

    return True


n = int(input("Enter the value of N: "))

if n < 2:
    print("Not Prime Number.")
elif check_prime(n):
    print("Prime Number.")
else:
    print("Not Prime Number.")