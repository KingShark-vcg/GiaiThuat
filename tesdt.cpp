#include <iostream>
using namespace std;
int tong(int a, int b){
    int tong = 0;
    for(int i = a; i<=b;i++){
        if(i%2==1) tong+=i; 
    }
    return tong;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<tong(a,b)<<endl;
    return 0;
}