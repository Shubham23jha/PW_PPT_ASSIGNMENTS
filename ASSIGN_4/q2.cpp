#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<int>> findDistinct(const vector<int>& nums1, const vector<int>& nums2) {
    unordered_set<int> numSet;
    vector<int> result1, result2;

    
    for (int num : nums1) {
        numSet.insert(num);
    }
    for (int num : nums2) {
        numSet.insert(num);
    }

    
    for (int num : nums1) {
        if (numSet.find(num) == numSet.end()) {
            result1.push_back(num);
        }
    }

    
    for (int num : nums2) {
        if (numSet.find(num) == numSet.end()) {
            result2.push_back(num);
        }
    }

    return {result1, result2};
}

int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};

    vector<vector<int>> result = findDistinct(nums1, nums2);

    
    for (const auto& distinctNums : result) {
        for (int num : distinctNums) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
