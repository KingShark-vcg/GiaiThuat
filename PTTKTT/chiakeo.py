# A= [82, 52, 95, 93, 87, 46, 63, 5, 54]
# n= 9
# h= 288
n= int(input())
A= [ int(i) for i in input().split(' ')]
h= sum(A)//2
dp= [[-1 for j in range (h+1)] for i in range(n)]
#dp[i][j]: tổng của 1 tập con trong A từ 0 đến i gần j nhất 
def solve(i, j):
	if dp[i][j] != -1:
		return dp[i][j]
	if i == -1:
		return 0
	if j <= 0:
		return 0;
	x= solve(i-1, j) #ko lay
	if j >= A[i]:
		x= max(x, solve(i-1, j - A[i]) + A[i])
	dp[i][j]= x
	return x

r= solve(n-1, h)
l= sum(A) - r
print(abs(r-l))

# import pandas as pd

# df= pd.DataFrame(dp).T
# df.to_csv("chiakeo.csv")