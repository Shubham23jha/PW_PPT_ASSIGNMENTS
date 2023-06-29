#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxCount(int m, int n, vector<vector<int>>& ops) {
    int minRow = m;
    int minCol = n;

    for (const vector<int>& op : ops) {
        minRow = min(minRow, op[0]);
        minCol = min(minCol, op[1]);
    }

    return minRow * minCol;
}

int main() {
    int m = 3;
    int n = 3;
    vector<vector<int>> ops = {{2, 2}, {3, 3}};

    int result = maxCount(m, n, ops);

    cout << result << endl; 

    return 0;
}
