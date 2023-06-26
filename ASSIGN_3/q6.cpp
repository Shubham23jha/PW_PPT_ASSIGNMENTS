#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    
    for (int num : nums) {
        result ^= num;
    }
    
    return result;
}

int main() {
    vector<int> nums = {2, 2, 1};
    int result = singleNumber(nums);
    
    cout << "The single number is: " << result << endl;
    
    return 0;
}
