def binaryTOdec(binNum):
    decNum = 0
    power = 0

    while binNum > 0:
        rem = binNum % 10

        if rem > 1:
            print("\nInvalid Binary Number")
            return
        decNum += rem * (2 ** power)

        binNum //= 10
        power += 1

    return decNum

n = int(input("\nEnter a binary number: "))
print(f"Decimal = {binaryTOdec(n)}\n")

