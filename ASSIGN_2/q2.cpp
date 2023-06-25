#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int maxNumberOfDifferentCandies(vector<int>& candyType) {
    unordered_set<int> uniqueTypes;
    for (int type : candyType) {
        uniqueTypes.insert(type);
    }
    return min(uniqueTypes.size(), candyType.size() / 2);
}

int main() {
    vector<int> candyType = {1, 1, 2, 2, 3, 3};
    int maxTypes = maxNumberOfDifferentCandies(candyType);
    cout << "Maximum number of different candy types Alice can eat: " << maxTypes << endl;
    return 0;
}
