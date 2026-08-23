def factorial(N):
    if N == 0:
        return 1
    else:
        return N * factorial(N - 1)


n = int(input("Enter the value of n: "))
r = int(input("Enter the value of r: "))

if n < 0 or r < 0 or r > n:
    print("Invalid input")
else:
    nCr = factorial(n) // (factorial(r) * factorial(n - r))
    print(f"nCr = {nCr}")