def calculate_club_power(n, m):
    MOD = 10**9 + 7
    factorial = [1] * (n + 1)
    for i in range(2, n + 1):
        factorial[i] = (factorial[i - 1] * i) % MOD
    
    parent = [i for i in range(n + 1)]
    size = [1] * (n + 1)
    
    def find(x):
        if parent[x] != x:
            parent[x] = find(parent[x])
        return parent[x]
    
    def union(x, y):
        x_root = find(x)
        y_root = find(y)
        if x_root != y_root:
            parent[y_root] = x_root
            size[x_root] += size[y_root]
    
    for _ in range(m):
        x, y = map(int, input().split())
        union(x, y)
    
    total_power = 0
    for i in range(1, n + 1):
        if parent[i] == i and size[i] >= 3:
            total_power += factorial[size[i]]
            total_power %= MOD
    
    return total_power

n, m = map(int, input().split())
result = calculate_club_power(n, m)
print(result)
