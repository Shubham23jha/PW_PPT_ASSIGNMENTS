#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findLHS(vector<int>& nums) {
    unordered_map<int, int> countMap;
    for (int num : nums) {
        countMap[num]++;
    }
    
    int maxLen = 0;
    for (auto it = countMap.begin(); it != countMap.end(); ++it) {
        int num = it->first;
        if (countMap.find(num + 1) != countMap.end()) {
            int len = countMap[num] + countMap[num + 1];
            maxLen = max(maxLen, len);
        }
    }
    
    return maxLen;
}

int main() {
    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    int maxLength = findLHS(nums);
    cout << "Length of the longest harmonious subsequence: " << maxLength << endl;
    return 0;
}
