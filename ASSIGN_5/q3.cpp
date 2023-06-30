#include <iostream>
#include <vector>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);

    int left = 0;
    int right = n - 1;
    int i = n - 1;

    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            result[i] = nums[left] * nums[left];
            left++;
        } else {
            result[i] = nums[right] * nums[right];
            right--;
        }
        i--;
    }

    return result;
}

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> squaredSorted = sortedSquares(nums);

    cout << "Squared Sorted Array: ";
    for (int num : squaredSorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
