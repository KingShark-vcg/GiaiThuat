#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x, double p, double q, double r, double s, double t, double u) {
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * (x * x) + u;
}

int main() {
    double p, q, r, s, t, u;
    while (cin >> p >> q >> r >> s >> t >> u) {
        double L = 0;
        double R = 1;
        if (f(L, p, q, r, s, t, u) * f(R, p, q, r, s, t, u) > 0) {
            cout << "No solution" << endl;
        } else {
            while (abs(R - L) > 1e-10) {
                double mid = (R + L) / 2;
                if (f(mid, p, q, r, s, t, u) > 0) {
                    L = mid;
                } else {
                    R = mid;
                }
            }
            cout << fixed << setprecision(4) << L << endl;
        }
    }
    return 0;
}