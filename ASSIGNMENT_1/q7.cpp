#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        if (nums[left] == 0) {
            swap(nums[left], nums[right]);
            right--;
        } else {
            left++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    cout << "Output: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
