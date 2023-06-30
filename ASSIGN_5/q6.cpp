#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> duplicates;

    for (int num : nums) {
        int index = abs(num) - 1;

        if (nums[index] < 0) {
            duplicates.push_back(abs(num));
        } else {
            nums[index] = -nums[index];
        }
    }

    return duplicates;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> duplicates = findDuplicates(nums);

    cout << "Integers that appear twice: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
