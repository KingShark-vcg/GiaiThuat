#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;
long long power(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b % 2 == 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}
long long sum(long long r, long long n) {
    if (n == 1)
        return 1;
    long long x = sum(r, n/2);
    x = (x+ (power(r, n/2)*x)%MOD)%MOD;
    if (n % 2 == 1)
        x = (x + power(r, n-1))%MOD;
    return x;
}
int main() {
    long long r, n, a;
    cin >> a >> r >> n;
    cout << (a * sum(r, n)) % MOD << endl;
    return 0;
}
