#include <iostream>
using namespace std;

// f(i)= f(i-2) + f(i-1)
// f(0)= f(1)= 1

int fibo(int i){
    if(i == 0 || i == 1)
        return 1;
    return fibo(i-2) + fibo(i-1);
}

int giaiThua(int n){
    if (n == 0)
        return 1;
    return giaiThua(n-1)*n;
}

// gcd(a,b)= gcd(a-b,b) voi a>b
// gcd(a,b)= gcd(b,a%b)

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

int main(){
    for(int i=0;i<10;i++){
        cout<<"fibo thu "<<i<<" la "<<fibo(i)<<endl;   
    }

    for(int i=0;i<10;i++){
        cout<<i<<"! = "<<giaiThua(i)<<endl;   
    }

    int a, b;
    cout<<"Nhap 2 so a va b: ";
    cin>>a>>b;
    //cout<<"UCLN(a,b)= "<<gcd(a,b)<<endl;

    while (b != 0){
        int c= a;
        a= b;
        b= c%b;
    }
    cout<<"UCLN(a,b)= "<<a<<endl;


    return 0;
}
