def reverse_array(arr, size):
    start = 0
    end = size - 1

    while start < end:
        arr[start], arr[end] = arr[end], arr[start]

        start += 1
        end -= 1

    print(arr)


arr = [10, 15, 11, 10, 30, 14, 9]
size = len(arr)

reverse_array(arr, size)