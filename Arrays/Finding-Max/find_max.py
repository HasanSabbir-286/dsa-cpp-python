marks = [99, 98, 55, 70, 100]

highest = float('-inf')
for num in marks:
    highest = max(num, highest)

print(f"Highest = {highest}")