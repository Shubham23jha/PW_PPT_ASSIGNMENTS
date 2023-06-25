#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumScore(vector<int>& nums, int k) {
    int minValue = *min_element(nums.begin(), nums.end());
    int maxValue = *max_element(nums.begin(), nums.end());
    int score = maxValue - minValue;
    
    if (k >= score) {
        return 0;
    }
    
    int potentialMin = minValue + k;
    int potentialMax = maxValue - k;
    
    return potentialMax - potentialMin;
}

int main() {
    vector<int> nums = {1};
    int k = 0;
    int minScore = minimumScore(nums, k);
    cout << "Minimum score: " << minScore << endl;
    return 0;
}
