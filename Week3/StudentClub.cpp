#include <iostream>
#include <math.h>
#include <set>
using namespace std;
long long id[100005];
long long sz[100005];
int root(int i){
    while(i!=id[i]){
        id[i] = id[id[i]];
        i = id[i];
    }
        return i;
    }
void QuickUnion(int n){
    for(int i =1; i<=n;i++){
        id[i] =i;
        sz[i]=1;
    }
}
bool conect(int q, int p){
    return root(q) == root(p);
}
void Union(int q, int p){
    int rootQ = root(q);
    int rootP = root(p);
    if(rootQ == rootP) return;
    if(sz[rootP]<sz[rootQ]){
        id[rootP] = rootQ;
        sz[rootQ] += sz[rootP];
    }
    else{
        id[rootQ] = rootP;
        sz[rootP] += sz[rootQ];
    }
}
long long mod = 1e9 + 7;
long long fac(int n){
    long long p = 1;
    for(int i = 1;i<=n;i++){
        p = (p*i)%mod;
    }
    return p;
}
int main(){
    int n; // So luong hoc sinh
    int m; // So luong ket noi
    int st1, st2;
    set<int> clubs;
    long long sum = 0;
    cin>>n>>m;
    QuickUnion(n);
    while(m--){
        cin>>st1>>st2;
        if(!conect(st1, st2)){
            Union(st1,st2);
        }
    }
    for(int i = 1;i<=n;i++){
        clubs.insert(root(i));
    }
    for (auto club:clubs){
        if(sz[club] > 2){
            sum = (sum + fac(sz[club]))% mod;
        }
    }
    cout<<sum<<endl;
    return 0;
}