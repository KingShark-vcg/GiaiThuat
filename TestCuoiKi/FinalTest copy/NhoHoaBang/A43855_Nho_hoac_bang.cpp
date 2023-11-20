#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> nhoHoacBang(const vector<int>& arr_a, const vector<int>& arr_b) {
    vector<int> ketQua;
    vector<int> sorted_a = arr_a;
    sort(sorted_a.begin(), sorted_a.end()); 
    for (int b : arr_b) {
        int dem = 0;
        int trai = 0, phai = sorted_a.size() - 1;

        while (trai <= phai) {
            int giua = (trai + phai) / 2;

            if (sorted_a[giua] <= b) {
                dem = giua + 1;
                trai = giua + 1;
            } else {
                phai = giua - 1;
            }
        }

        ketQua.push_back(dem);
    }
    return ketQua;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr_a(n);
    vector<int> arr_b(m);

    for (int i = 0; i < n; ++i) {
        cin >> arr_a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> arr_b[i];
    }
    vector<int> ketQua = nhoHoacBang(arr_a, arr_b);
    for (int i = 0; i < m; ++i) {
        cout << ketQua[i] << " ";
    }
    return 0;
}