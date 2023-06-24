#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i = 0;
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int k = removeElement(nums, val);

    cout << "Output: " << k << endl;
    cout << "Modified nums: [";
    for (int i = 0; i < k; i++) {
        cout << nums[i];
        if (i != k - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
