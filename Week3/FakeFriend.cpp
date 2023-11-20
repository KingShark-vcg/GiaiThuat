#include <iostream>
#include <map>
using namespace std;
int parent[(int)2e5 + 5], sz[(int) 2e5 + 5];
int root(int n){
    if(n ==parent[n]) return n;
    return parent[n] = root(parent[n]);
}
void QuickUnion(int n){
    parent[n] = n;
    sz[n] = 1;
}
void Union(int q, int p){
    int rootQ = root(q);
    int rootP = root(p);
    if(rootQ != rootP){
        if(sz[rootQ] < sz[rootP]){
            swap(rootQ, rootP);
        }
        parent[rootP] = rootQ;
        sz[rootQ] += sz[rootP];
    }
}
int main(){
    int f;
    cin>>f;
    string n,m;
    int index = 1;
    map<string, int> fr;
    for(int i = 0;i<(int) 2e5 + 5;i++) QuickUnion(i);
    for(int i = 0; i<f;i++){
        cin>>n>>m;
        if(fr[n] == 0){
            fr[n] = index;
            index++;
        }
        if(fr[m] == 0){
            fr[m] = index;
            index++;
        }
        Union(fr[n],fr[m]);
        int grand = sz[root(fr[n])];
        cout<<grand<<"\n";
    }
}
