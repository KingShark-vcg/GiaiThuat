#include <iostream>
using namespace std;

int main(){
    int n, t = 0, f[2002], d[2002];
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        t = t + a[i];
    }
    t = t / 2;

    for (int i = 1; i <= t; i++){
        f[i] = 2002;
        for (int j = 1; j <= n; j++)
            if (i >= a[j] && j > f[i - a[j]]){
                f[i] = j;
                break;
            }
    }

    int sum1 = 0, sum2 = 0;

    while (f[t] > n) t--;
    while (t > 0){
        d[f[t]] = 1;
        t = t - a[f[t]];
    }   
    
    for (int i = 1; i <= n; i++){
        if (d[i] == 1) sum1 += a[i];
        if (d[i] != 1) sum2 += a[i];
    }
    cout << abs(sum1 - sum2);
    return 0;
}