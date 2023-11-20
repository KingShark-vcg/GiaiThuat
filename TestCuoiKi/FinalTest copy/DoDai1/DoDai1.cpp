#include <iostream>
#include <vector>
using namespace std;
int so_so_1(int n, int k, const vector<int>& sequence) {
    int max_ones = 0;
    int current_ones = 0;
    for (int i = 0; i < k; ++i) {
        if (sequence[i] == 1) {
            current_ones += 1;
        }
    }
    max_ones = current_ones;
    for (int i = k; i < n; ++i) {
        if (sequence[i - k] == 1) {
            current_ones -= 1;
        }
        if (sequence[i] == 1) {
            current_ones += 1;
        }
        max_ones = max(max_ones, current_ones);
    }
    return max_ones;
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }
    int result = so_so_1(n, k, sequence);
    cout << result << endl;
    return 0;
}