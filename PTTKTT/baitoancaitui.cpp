# include<iostream>
using namespace std;

int W;
int N;
int w[2002], v[2000];
int dp[2002][2002];
int solve(int i, int w_)
{
    if (i == -1) return 0;
    if (w_ == 0) return 0;
    if (dp[i][w_] != -1) return dp[i][w_];
    int r = solve(i - 1, w_);
    if (w_ >= w[i]) r = max(r, solve(i - 1, w_ - w[i]) + v[i]);
    return dp[i][w_] = r;
}

int main()
{
    cin >> W >> N;
    for (int i = 0; i < N; i++) cin >> w[i];
    for (int i = 0; i < N; i++) cin >> v[i];
    for (int i = 0; i < N; i++) for (int j = 0; j <= W; j++) dp[i][j] = -1;
    cout << solve(N-1, W);
    return 0;
}