def maximumWealth(darr):
    richest_wealth = 0
    for arr in darr:
        curr_sum = 0
        for item in arr:
            curr_sum += item
        if curr_sum > richest_wealth:
            richest_wealth = curr_sum
    return richest_wealth



accounts = [[1,2,3],[3,2,1]]
print(maximumWealth(accounts))