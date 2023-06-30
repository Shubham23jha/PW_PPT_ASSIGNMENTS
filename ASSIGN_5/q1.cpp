#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> convertTo2DArray(const vector<int>& original, int m, int n) {
    if (m * n != original.size()) {
        return {};
    }
    
    vector<vector<int>> result(m, vector<int>(n, 0));
    for (int i = 0; i < original.size(); i++) {
        int row = i / n;
        int col = i % n;
        result[row][col] = original[i];
    }
    
    return result;
}

int main() {
    vector<int> original = {1, 2, 3, 4};
    int m = 2;
    int n = 2;
    vector<vector<int>> result = convertTo2DArray(original, m, n);

    for (const auto& row : result) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
