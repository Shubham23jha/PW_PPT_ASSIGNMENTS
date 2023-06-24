#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
vector<int> findErrorNums(vector<int>& nums) {
    unordered_set<int> numSet;
    int duplicate = -1;
    int missing = -1;

    for (int num : nums) {
        if (numSet.count(num) > 0) {
            duplicate = num;
        }
        numSet.insert(num);
    }

    int n = nums.size();
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    for (int num : nums) {
        arraySum += num;
    }
    missing = totalSum - arraySum + duplicate;

    return {duplicate, missing};
}

int main() {
    vector<int> nums = {1, 2, 2, 4};
    vector<int> result = findErrorNums(nums);
    cout << "Output: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
