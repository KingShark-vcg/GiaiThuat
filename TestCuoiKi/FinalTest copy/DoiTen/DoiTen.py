def doi_ten(n, changes):
    unique_names = set()
    for i in range(n):
        old_name, new_name = changes[i]
        unique_names.discard(old_name)  
        unique_names.add(new_name)      
    return len(unique_names)
n = int(input())
changes = [input().split() for _ in range(n)]
result = doi_ten(n, changes)
print(result)