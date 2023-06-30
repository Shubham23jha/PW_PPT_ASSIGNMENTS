#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findOriginalArray(vector<int>& changed) {
    vector<int> original;
    unordered_map<int, int> counts;

    
    for (int num : changed) {
        counts[num]++;
    }

    
    for (auto it = counts.begin(); it != counts.end(); ++it) {
        int num = it->first;
        int count = it->second;

        if (counts[num * 2] < count) {
            return {}; 
        }

        
        for (int i = 0; i < count; i++) {
            original.push_back(num);
        }

        
        counts[num * 2] -= count;
    }

    return original;
}

int main() {
    vector<int> changed = {1, 3, 4, 2, 6, 8};

    vector<int> original = findOriginalArray(changed);

    cout << "Original array: ";
    for (int num : original) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

