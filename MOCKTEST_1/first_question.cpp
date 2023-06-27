#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int>& v) {
    int i = 0;
    int j = 0;
    while (j < v.size() && i < v.size()) {
        if (v[i] == 0 && v[j] != 0) {
            swap(v[i], v[j]);
            i++;
            j++;
        }
        if (v[j] == 0) {
            j++;
        }
        if (v[i] != 0) {
            i++;
        }
    }
}

int main() {
    vector<int> v = {0, 1, 0, 3, 12};
    solve(v);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
