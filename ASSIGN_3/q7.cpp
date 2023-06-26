#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
    vector<string> result;
    
    long long start = lower;
    for (int num : nums) {
        if (num > start) {
            result.push_back(getRange(start, num - 1));
        }
        start = (long long)num + 1;
    }
    
    if (start <= upper) {
        result.push_back(getRange(start, upper));
    }
    
    return result;
}

string getRange(int start, int end) {
    if (start == end) {
        return to_string(start);
    } else {
        return to_string(start) + "->" + to_string(end);
    }
}

int main() {
    vector<int> nums = {0, 1, 3, 50, 75};
    int lower = 0;
    int upper = 99;
    
    vector<string> result = findMissingRanges(nums, lower, upper);
    
    cout << "The ranges are:" << endl;
    for (const string& range : result) {
        cout << "[" << range << "]" << endl;
    }
    
    return 0;
}
