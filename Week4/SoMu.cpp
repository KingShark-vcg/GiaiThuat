#include <iostream>
#include <cmath>
using namespace std;
int binary(double a, double b) {
    for (int k = 39; k >= 1; k--) {
        double left = 1;
        double right = pow(b,1.0 /k) +1 ;
        while (left <= right) {
            int mid = (left + right) / 2;
            long long res = pow(mid, k);
            if (res >= a && res <= b) return k;
            else if (res < a) left = mid + 1;
            else right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        double a, b;
        cin >> a >> b;
        int ans = binary(a, b);
        cout << "C #" << i << ": " << ans << endl;
    }
    return 0;
}