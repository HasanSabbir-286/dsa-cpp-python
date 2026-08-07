marks = [99, 98, 55, 70, 100]

smallest = float('inf')
for num in marks:
    if num < smallest :
        smallest = num

print(f"Smallest = {smallest}")