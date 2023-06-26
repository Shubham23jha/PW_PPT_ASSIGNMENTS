#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // Sort the array in ascending order
    int max_sum = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        max_sum += nums[i];
    }
    return max_sum;
}

int main() {
    vector<int> nums = {1, 4, 3, 2};
    int max_sum = arrayPairSum(nums);
    cout << "Maximum possible sum: " << max_sum << endl;
    return 0;
}
