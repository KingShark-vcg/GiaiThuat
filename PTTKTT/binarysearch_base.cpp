#include <iostream>
using namespace std;
// Ham dong bien: f(x)= 2x+1 x1 < x2 <=> f(x1) < f(x2)
// Ham nghich bien: f(x)= -2x+1 x1 < x2 <=> f(x1) > f(x2)

//     1 2 3 4 5 6  7  8  9  10
// A= [3,5,6,7,9,10,23,32,45,56]
// So 45 co toon tai trong mang A

// f(x)= A[x] => x1 < x2 <=> f(x1) < f(x2) => f la ham don dieu
// 1<= x <= 10

int main(){
    
    int A[10]= {3, 5, 6, 7, 9, 10, 23, 32, 45, 56};
    int x= 11;

    int l= 0, r= 9;
    int mid= (l+r)/2; // Vi tri o giua
    while(l != r){ // l == r 
        if (A[mid] < x)
            l= mid+1;
        else //A[mid] >= x
            r= mid;
        cout<<mid<<" "<<A[mid]<<" "<<"l= "<<l<<" r= "<<r<<endl;
        mid= (l+r)/2;
    }
    if (x == A[mid])
        cout<<"x co ton tai trong mang A tai vi tri thu "<<mid<<endl;
    else
        cout<<"x KHONG ton tai trong mang A"<<endl;
    return 0;
}
