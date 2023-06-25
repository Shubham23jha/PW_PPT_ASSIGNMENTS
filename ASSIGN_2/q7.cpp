#include <iostream>
#include <vector>

using namespace std;

bool isMonotonic(vector<int>& nums) {
    bool isIncreasing = true;
    bool isDecreasing = true;
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            isDecreasing = false;
        }
        
        if (nums[i] < nums[i - 1]) {
            isIncreasing = false;
        }
    }
    
    return isIncreasing || isDecreasing;
}

int main() {
    vector<int> nums = {1, 2, 2, 3};
    bool isMonotonicArray = isMonotonic(nums);
    cout << "Is the array monotonic? " << (isMonotonicArray ? "Yes" : "No") << endl;
    return 0;
}
