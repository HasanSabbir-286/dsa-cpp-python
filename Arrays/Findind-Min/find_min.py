marks = [99, 98, 55, 70, 100]

smallest = float('inf')
for num in marks:
    smallest = min(num, smallest)

print(f"Smallest = {smallest}")