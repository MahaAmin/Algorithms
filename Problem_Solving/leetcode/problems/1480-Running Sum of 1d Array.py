def runningSum(arr):
    running_sum = []
    running_sum.append(arr[0])
    arr_len = len(arr)
    for i in range(1, arr_len):
        running_sum.append(running_sum[i-1]+arr[i])
    return running_sum


nums = [1,2,3,4]
output = runningSum(nums)
print(output)