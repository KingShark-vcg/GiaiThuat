def thucHienThaoTac(x, thaoTac):
    if thaoTac == "X++" or thaoTac == "++X":
        x += 1
    elif thaoTac == "X--" or thaoTac == "--X":
        x -= 1
    return x

def main():
    x = 0
    n = int(input())
    
    for i in range(n):
        thaoTac = input()
        x = thucHienThaoTac(x, thaoTac)
    
    print(x)
main()

