#include <iostream>
using namespace std;
class QuickUnion{
    private:
        int * id;
        int count;
        int root(int i){
            while(i!=id[i]) i = id[i];
            return i;
        }
    public:
        QuickUnion(int n){
            count = n;
            id = new int[n];
            for(int i =0;i<n;i++){
                id[i] = i;  
            }
        }
        bool conenct(int q, int p){
            return root(q) == root(p);
        }
        void Union(int q, int p){
            int i = root(p);
            int j = root(q);
            id[i]= j;
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