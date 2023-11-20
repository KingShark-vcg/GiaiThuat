#include <iostream>
using namespace std;
class UF{
    private:
        int * id;
    public:
        UF(int n){
            id = new int[n];
            for(int i =0;i<n;i++){
                id[i] = i;  
            }
        }
        bool conenct(int q, int p){
            return id[q] == id[p];
        }
        void Union(int q, int p){
            int qid = id[q];
            int pid = id[p];
            for(int i =0;i< sizeof(id);i++){
                if(id[i] == qid) id[i] == pid;
            }
        }
};
int main(){
    UF a(10);
    a.Union(1,2);
    a.Union(3,5);
    a.Union(4,6);
    a.Union(3,7);
    cout<<a.conenct(5,7)<<endl;
    a.Union(7,8);
    a.Union(9,10);
    cout<< a.conenct(8,10) <<endl;
    return 0;
}