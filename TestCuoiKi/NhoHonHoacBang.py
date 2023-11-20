def so_phan_tu(n, m, a, b):
    a.sort()
    result = []
    for bj in b:
        count = 0
        for ai in a:
            if ai <= bj:
                count += 1
            else:
                break  
        result.append(count)
    return result
n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

output = so_phan_tu(n, m, a, b)
print(" ".join(map(str, output)))
