import math

n = int(input())
def solve(n):
    a = 0
    b = int(math.sqrt(n))
    while a <= b:
        if a**2 + b**2 == n:
            print("YES")
            return
        elif a**2 + b**2 < n:
            a += 1
        else:
            b -= 1
    print("NO")

solve(n)