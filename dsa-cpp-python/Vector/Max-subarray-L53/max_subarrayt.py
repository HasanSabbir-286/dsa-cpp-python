nums = [3, -4, 5, 4, -1, 7, -8]

def mxSubArray(nums):
    if len(nums) == 0:
        return 0

    maximum = nums[0]
    currentMax = nums[0]

    for i in range(1, len(nums)):
        currentMax = max(nums[i], nums[i] + currentMax)
        maximum = max(maximum, currentMax)

    return maximum

print(mxSubArray(nums))
