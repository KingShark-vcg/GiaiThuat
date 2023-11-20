#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

ll power(ll a, ll b){
    if(b == 1)
        return a%MOD;
    ll x = power(a, b/2);
    x = (x*x)%MOD;
    if (b % 2 == 1)
        x = (x*a)%MOD;
    return x;
}

ll sum(ll r, ll n, ll m) {
    ll x = power(r, n);
    ll y = (power(r, m - n) - 1 + MOD) % MOD;
    ll inverse = power(r - 1, MOD - 2);
    return (x * y % MOD * inverse) % MOD;
}

int main(){
    int r, n, a, m;
    cin >> a >> r >> n >> m;
    cout << (a*sum(r, n, m))%MOD << endl;
    return 0;
}