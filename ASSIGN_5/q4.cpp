#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

vector<vector<int>> findDisjointArrays(const vector<int>& nums1, const vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());

    vector<int> distinctInNums1;
    vector<int> distinctInNums2;

    for (int num : nums1) {
        if (set2.find(num) == set2.end()) {
            distinctInNums1.push_back(num);
        }
    }

    for (int num : nums2) {
        if (set1.find(num) == set1.end()) {
            distinctInNums2.push_back(num);
        }
    }

    return {distinctInNums1, distinctInNums2};
}

int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};

    vector<vector<int>> result = findDisjointArrays(nums1, nums2);

    cout << "Distinct integers in nums1 not present in nums2: ";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Distinct integers in nums2 not present in nums1: ";
    for (int num : result[1]) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
