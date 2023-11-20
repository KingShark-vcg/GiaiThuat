#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int doiTen(int n, vector<pair<string, string>>& thaydoiTen) {
    unordered_set<string> ten;
    for (int i = 0; i < n; ++i) {
        const string& tenCu = thaydoiTen[i].first;
        const string& tenMoi = thaydoiTen[i].second;

        ten.erase(tenCu);
        ten.insert(tenMoi);
    }
    return ten.size();
}

int main() {
    int n;
    cin >> n;
    vector<pair<string, string>> thaydoiTen(n);
    for (int i = 0; i < n; ++i) {
        cin >> thaydoiTen[i].first >> thaydoiTen[i].second;
    }
    int ketQua = doiTen(n, thaydoiTen);
    cout << ketQua << endl;
    return 0;
}