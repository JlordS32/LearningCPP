

def foo(prices):

    min = prices[0]

    for i in range(len(prices) - 2):
        if (min > prices[i]):
            min = prices[i]

    max = prices[prices.index(min) + 1]
    for i in range(prices.index(min) + 1, len(prices)):
        if (max < prices[i]):
            max = prices[i]

    if (max - min < 0): 
        return 0
    return max - min

print(foo([2,1,2,1,0,1,2]))