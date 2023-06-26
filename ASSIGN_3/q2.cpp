#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> quadruplets;

    for (int i = 0; i < n - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        for (int j = i + 1; j < n - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) {
                continue;
            }

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                int curr_sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (curr_sum == target) {
                    quadruplets.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) {
                        ++left;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        --right;
                    }
                    ++left;
                    --right;
                } else if (curr_sum < target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
    }

    return quadruplets;
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);

    for (const auto& quadruplet : result) {
        for (int num : quadruplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
