import math

def print_prime(N):
    for i in range(2, N + 1):
        is_prime = True;

        for j in range(2, int(math.sqrt(i)) + 1):
            if i % j == 0:
                is_prime = False
                break
    
        if is_prime:
            print(f"{i}", end=" ")


n = int(input("Enter the value of N: "))

if n < 2:
    print("No Prime Number in this range.")
else:
    print_prime(n)