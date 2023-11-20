#include <bits/stdc++.h>
using namespace std;

double p, q, r, s, t, u;

double f(double x) {
    double a = p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * (x * x) + u;
    return a;
}

int main() {
    int count = 0;
    while (cin >> p >> q >> r >> s >> t >> u) {
        count++;
        if (count == 2100) {
            break;
        }
        double L = 0;
        double R = 1;
        double mid;
        if (f(L) < 0 || f(R) > 0) {
            cout << "No solution" << endl;
        } else {
            while (abs(R - L) > pow(10, -12)) {
                mid = (R + L) / 2;
                if (f(mid) > 0) {
                    L = mid;
                } else {
                    R = mid;
                }
            }
            cout << fixed << setprecision(4) << mid << endl;
        }
    }
    return 0;
}
