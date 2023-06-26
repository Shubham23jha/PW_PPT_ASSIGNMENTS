#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int size = nums.size();
    int product1 = nums[size - 1] * nums[size - 2] * nums[size - 3];
    int product2 = nums[0] * nums[1] * nums[size - 1];
    return max(product1, product2);
}

int main() {
    vector<int> nums = {1, 2, 3};
    int maxProduct = maximumProduct(nums);
    cout << "Maximum product: " << maxProduct << endl;
    return 0;
}
