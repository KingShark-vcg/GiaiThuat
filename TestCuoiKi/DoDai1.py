def so_so_1(n, k, seq):
    max_ones = 0
    cur_ones = 0
    for i in range(k):
        if seq[i] == 1:
            cur_ones += 1
    max_ones = cur_ones
    for i in range(k, n):
        if seq[i - k] == 1:
            cur_ones -= 1
        if seq[i] == 1:
            cur_ones += 1
        max_ones = max(max_ones, cur_ones)
    return max_ones
n, k = map(int, input().split())
seq = list(map(int, input().split()))
result = so_so_1(n, k, seq)
print(result)