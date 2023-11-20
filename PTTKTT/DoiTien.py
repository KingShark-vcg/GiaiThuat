def cal(n, memo):
    if n in memo:
        return memo[n]

    if n == 0:
        return 0

    max_value = max(n, cal(n//2, memo) + cal(n//3, memo) + cal(n//4, memo))
    memo[n] = max_value

    return max_value

while True:
    try:
        n = int(input())
        memo = {}
        max_value = cal(n, memo)
        print(max_value)
    except:
        break