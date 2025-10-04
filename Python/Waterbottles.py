def numWaterBottles(numBottles, numExchange):
    total = numBottles
    empty = numBottles

    while empty >= numExchange:
        new_bottles = empty // numExchange   # exchange empty bottles for new full ones
        total += new_bottles                 # drink those new bottles
        empty = new_bottles + (empty % numExchange)  # new empties + leftovers

    return total


# Example
print(numWaterBottles(9, 3))  # Output: 13
