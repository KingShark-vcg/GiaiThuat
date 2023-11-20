#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// def F(n, k):
// #     print(n, k)
//     if n == 1: return [[k]]
//     if k == 0: return [[ 0 for i in range(n)]]
//     R= [] #ket qua tong cho tat ca bien xn
//     for xn in range(k, -1, -1):
//         f= F(n-1, k-xn) # ket qua cua pt con
//         for m in f:
//             m.append(xn)
//         R.extend(f)
//     return R
// n, k= map(int, input().split())
// r= F(n, k)
// for m in r:
//     print(' '.join(map(str, m[::-1])))
typedef vector < vector < int > > vvi;
typedef vector < int > vi;
vvi F (int n, int k){
    if (n == 1)
        return vvi(1, vi(1, k)); //[[k]]
    if (k == 0)
        return vvi(1, vi(n, 0)); //[[0,0,...,0]]
    vvi R;
    for(int xn= k;xn>= 0; xn--){
        vvi f= F(n-1, k-xn);
        for(int i=0; i< f.size(); i++){
            f[i].push_back(xn);
            R.push_back(f[i]);
        }
    }
    return R;
}
int main() {
    int n, k;
    cin>>n>>k;
    vvi r= F(n, k);
    for(int i=0;i<r.size();i++){
        for(int j=n-1;j>=0;j--)
            cout<<r[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}