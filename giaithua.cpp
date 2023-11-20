#include <iostream>
using namespace std;
const int MOD = 1e9 +7;
long long giaithua(int n){
    if(n == 1 || n==0) return 1;
    return (n*giaithua(n-1))% MOD;
}
int main(){
    int n;
    cin>>n;
    cout<<giaithua(n)<<endl;
    return 0;
}