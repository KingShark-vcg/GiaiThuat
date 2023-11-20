#include <iostream>
using namespace std;
class QuickUnion{
    private:
        int *id;
        int * sz;
        int count;
    int root(int i){
        while(i!=id[i]) i = id[i];
        return i;
    }
    public:
        QuickUnion(int n){
            count = n; 
            id = new int[n];
            sz = new int[n];
            for(int i =0;i<n;i++){
                id[i] =i;
                sz[i]=1;
            }
        }
        void conect(int q, int p){
            if(root(q) == root(p)){
                cout<<"Conect"<<endl;
            }
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
            count--;
        }
        int getCount(){
            return count;
        }
};
int main(){
    QuickUnion a(1);  
    a.Union(5,3);
    a.Union(1,2);
    a.Union(3,5);
    a.Union(2,3);
    cout<<a.getCount()<<endl;
    return 0;
}