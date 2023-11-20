#include <iostream>
using namespace std;
int binarySearch(int a[], int left, int right, int x){
    while(left <= right){
        int mid = left + (right-left)/2;
        if(a[mid] == x){
            return mid;
        }
        if(a[mid] < x){
            left = mid + 1;
        }else right = mid - 1;
    }
    return -1;
}
int main(){
    int a[] ={1,2,4,5,7,9,11,20};
    int n = sizeof(a)/sizeof(a[0]);
    int x;
    cin>>x;
    int re = binarySearch(a,0,n-1,x);
    if(re == -1) cout<<"Not Found"<<endl;
    else cout<<"Found"<<endl;
    return 0;
}