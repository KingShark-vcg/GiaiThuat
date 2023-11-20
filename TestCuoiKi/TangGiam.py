def tang_giam(n, operations):
    x = 0
    for operation in operations:
        if "++" in operation:
            x += 1
        elif "--" in operation:
            x -= 1
    return x
n = int(input())
operations = [input() for _ in range(n)]
result = tang_giam(n, operations)
print(result)