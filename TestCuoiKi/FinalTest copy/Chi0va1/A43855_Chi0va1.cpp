#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void generateBinarySequences(int n, int k, vector<string>& result) {
    vector<int> indices(n, 0);
    for (int i = n - k; i < n; ++i) {
        indices[i] = 1;
    }
    do {
        string sequence;
        for (int index : indices) {
            sequence += (index == 1) ? '1' : '0';
        }
        result.push_back(sequence);
    } while (next_permutation(indices.begin(), indices.end()));
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<string> sequences;
    generateBinarySequences(n, k, sequences);
    cout << sequences.size() << endl;
    for (const string& seq : sequences) {
        cout << seq << endl;
    }
    return 0;
}