def dem_so_nho_hon_hoac_bang(arr_a, arr_b):
    result = []
    sorted_a = sorted(arr_a)  
    for b in arr_b:
        count = 0
        left, right = 0, len(sorted_a) - 1
        while left <= right:
            mid = (left + right) // 2
            if sorted_a[mid] <= b:
                count = mid + 1
                left = mid + 1
            else:
                right = mid - 1
        result.append(count)
    return result

n, m = map(int, input().split())

arr_a = list(map(int, input().split()))
arr_b = list(map(int, input().split()))

result = dem_so_nho_hon_hoac_bang(arr_a, arr_b)

print(*result)