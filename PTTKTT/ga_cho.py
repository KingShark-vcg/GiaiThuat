def find_chicken_and_dog(m, n):
    if n % 2 != 0 or m * 2 > n:
        return -1

    dog_count = (n - m * 2) // 2
    chicken_count = m - dog_count

    if chicken_count >= 0 and dog_count >= 0:
        return chicken_count, dog_count
    else:
        return -1
m, n = input().split(' ')
m, n = int(m), int(n)
result = find_chicken_and_dog(m, n)
if result != -1:
    chicken, dog = result
    print(chicken, dog)
else:
    print(-1)