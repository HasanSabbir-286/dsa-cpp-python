def linear_search(arr, size, target):
    for i in range(size):
        if arr[i] == target:
            return i

    return -1

arr = [1, 4, 9, 3, 10, 5, 4, 2]
size = 8
target = int(input("Enter Target: "))

print(linear_search(arr, size, target))

