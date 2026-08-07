marks = [99, 98, 55, 70, 100]

highest = float('-inf')
for num in marks:
    if num > highest :
        highest = num

print(f"Highest = {highest}")