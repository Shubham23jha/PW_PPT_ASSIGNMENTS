#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int closest_sum = INT_MAX;

    for (int i = 0; i < nums.size() - 2; ++i) {
        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int curr_sum = nums[i] + nums[left] + nums[right];
            if (curr_sum == target) {
                return curr_sum;
            }

            if (abs(curr_sum - target) < abs(closest_sum - target)) {
                closest_sum = curr_sum;
            }

            if (curr_sum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }

    return closest_sum;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    int result = threeSumClosest(nums, target);
    cout << result << endl;

    return 0;
}
