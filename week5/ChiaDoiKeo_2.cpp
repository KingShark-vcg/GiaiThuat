#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// D[i, w]: gia tri lon nhat khi xet den vat thu i voi w pao (i= 1...n)
// D[i, w]= max(D[i-1, w-W[i]] + V[i], D[i-1, w])
int _n;
int a[105];
int memo[105][5005];
int D(int i, int w){
    if (memo[i][w] != -1)
        return memo[i][w];
    if (i == 1){
        if (w >= a[i])
            return a[i];
        else
            return 0;
    } 
    if (w == 0)
        return 0;
    int x =  D(i-1, w);
    if (w >= a[i])
        x= max(x, D(i-1, w-a[i]) + a[i]);
    memo[i][w]= x;
    return x;
}
int main() {
    cin>>_n;
    int total = 0;
    for(int i=1 ;i<= _n; i++){
        cin>>a[i];
        total+=a[i];
    };
    int num = total/2;
    for(int i=1 ;i<= _n; i++)
        for(int j=1 ;j<= num; j++)
            memo[i][j]= -1;
    int x = D(_n, num);
    cout<< abs((total-x)-x)<<endl;
    return 0;
}