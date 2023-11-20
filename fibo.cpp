#include <iostream>
#include <math.h>
using namespace std;
const int MAX = 1e9 + 7;
int fibo(int n){
    if(n<=1) return n;
    return (fibo(n-1) + fibo(n-2))%MAX;
}
int main(){
    int n;
    cin>>n;
    
    cout<<fibo(n)<<endl;
    return 0;
}