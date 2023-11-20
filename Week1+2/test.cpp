#include <iostream>
using namespace std;
#define ll long long;


int main(){
    ios_base::sync_with_stdio(false);
    long long n;
    cin>> n;
    if(n%2==0) cout<<n/2<<endl;
    else cout<<n/2 -n<<endl;
    return 0;
}