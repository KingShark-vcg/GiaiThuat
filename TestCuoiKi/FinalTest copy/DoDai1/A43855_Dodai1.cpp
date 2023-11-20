#include <iostream>
#include <vector>
using namespace std;

int doDaiMang(int n, int k, const vector<int>& arr) {
    int max = 0;
    int dem = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 1) {
            dem++;
        } else {
            dem = 0;
        }
        if (dem > max) {
            max = dem;
        }
    }
    return max;
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int result = doDaiMang(n, k, arr);
    cout << result << endl;
    return 0;
}