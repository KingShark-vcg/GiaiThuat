#include <iostream>
#include <cmath>
using namespace std;

double binarySearch(int n, double f){
    double right = pow(10,12), left = 0, mid;
    while(right - left >= 0.00001){
        double mid = left + (right-left)/2;
        if(pow(mid, n) >= f) right = mid;
        else left = mid;
    }
    return left;
}
int main(){
    int n, f; cin >> n >> f;
    double ans = binarySearch(n, f);
    cout << ans;
    return 0;
}
