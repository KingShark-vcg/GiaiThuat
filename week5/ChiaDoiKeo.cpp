#include <iostream>
using namespace std;

int calculateSum(int a[], int n, int i, int sum) {
    if (i > n) {
        return sum;
    }
    sum += a[i];
    return calculateSum(a, n, i + 1, sum);
}
void dynamicProgramming(int f[], int a[], int n, int t, int i) {
    if (i > t) {
        return;
    }
    f[i] = 2002;
    for (int j = 1; j <= n; j++) {
        if (i >= a[j] && j > f[i - a[j]]) {
            f[i] = j;
            break;
        }
    }
    dynamicProgramming(f, a, n, t, i + 1);
}
void calculateDifference(int d[], int a[], int n, int t, int i, int &sum1, int &sum2) {
    if (i > n) {
        return;
    }
    if (d[i] == 1) {
        sum1 += a[i];
    } else {
        sum2 += a[i];
    }
    calculateDifference(d, a, n, t, i + 1, sum1, sum2);
}

int main(){
    int n, t = 0, f[2002] = {0}, d[2002] = {0};
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        t = t + a[i];
    }
    t = t / 2;
    dynamicProgramming(f, a, n, t, 1);
    while (f[t] > n) {
        t--;
    }
    while (t > 0){
        d[f[t]] = 1;
        t = t - a[f[t]];
    }
    int sum1 = 0, sum2 = 0;
    calculateDifference(d, a, n, t, 1, sum1, sum2);
    cout << abs(sum1 - sum2);
    return 0;
}
