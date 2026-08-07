marks = [99, 98, 55, 70, 100]

highest = float('-inf')
smallest = float('inf')
for num in marks:
    highest = max(num, highest)
    smallest = min(num, smallest)

print(f"Highest = {highest}")
print(f"Smallest = {smallest}")