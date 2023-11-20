#include <iostream>
using namespace std;

// Cho 1 so n. Nhiem vu la tim can bac 3 cua so n do. Tim 1 so a sau chp a^3 ~ n

// f(x)= x^3 => x1 < x2 <=> f(x1) < f(x2) => Dong bien
// a^3= n <==> 0 <= a <= n

// n= 6
// a= 5 ==> a^3 > n ==> a =6, 8...
// a= 1 ==> a^3 < n ==> a= 0, 0.5

// l=0, r= 6
// mid= 3 ==> a^3 = 27 > 6 ==> l=0 , r=3
// mid= 1.5 ==> a^3=3.375 < 6 ==> l=1.5, r=3
// ...

double f(double x){
    return x*x*x;
}

int main(){
    double n= 6;
    double l= 0, r= n;
    double mid= (l+r)/2; // Vi tri o giua
    int count= 0;
    int x;
    while(abs(l-r) > 1e-12){ // l == r 
        count+=1;
        if (f(mid) < n)
            l= mid;
        else
            r= mid;
        cout<<count<<": "<<mid<<" "<<f(mid)<<" "<<"l= "<<l<<" r= "<<r<<endl;
        mid= (l+r)/2;
        // cout<<"Nhap 1 so de tiep tuc: ";
        // cin>>x;
    }
    cout<<"Can bac 3 cua "<<n<<" la "<<mid<<endl;
    return 0;
}
