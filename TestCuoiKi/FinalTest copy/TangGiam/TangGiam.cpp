#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = 0;
    string operation;
    for (int i = 0; i < n; ++i) {
        cin >> operation;
        if (operation == "++X" || operation == "X++") {
            x+=1;
        } else if (operation == "--X" || operation == "X--") {
            x-=1;
        }
    }
    cout << x << endl;
    return 0;
}
