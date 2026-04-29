def buy_and_sell(arr):
    min_profit=float('inf')
    max_profit=0
    for i in arr:
        if i<min_profit:
            min_profit=i
        elif i-min_profit>max_profit:
            max_profit=i-min_profit
    return max_profit
print(buy_and_sell([8,7,6,5]))
            
