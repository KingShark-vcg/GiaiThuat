#include <iostream>
using namespace std;
int binary_search(int a[], int l,int r, int k){
    if(r>=l){
        int mid = (l+r)/2;
        if(a[mid] == k )return mid;
        if(a[mid] > k)return binary_search(a,l,mid-1,k);
        return binary_search(a,mid+1,r,k);
    }
    return -1;
}
int main(){
    int a[] = {1,2,3,4,5,7};
    int k;
    int n = sizeof(a)/sizeof(a[0]);
    cin>>k;
    cout<<binary_search(a,0,n-1,k)<<endl;
}