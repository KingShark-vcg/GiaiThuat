#include <iostream>
using namespace std;
void solve(int N, int K, int arr[], int index) {
    if (N == 1) {
        arr[index] = K;
        for (int i = 0; i <= index; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int xN = K; xN >=0 ; xN--) {
        arr[index] = xN;
        solve(N - 1, K - xN, arr, index + 1);
    }
}
int main() {
    int N, K;
    cin >> N >> K;
    int arr[N];
    solve(N, K, arr, 0);
    return 0;
}
