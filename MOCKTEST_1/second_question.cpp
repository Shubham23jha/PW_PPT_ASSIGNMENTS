#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int solve(string s) {
    unordered_map<char, int> frequency;

    for (char ch : s) {
        frequency[ch]++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (frequency[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    string s = "leetcode";
    cout << solve(s) << endl;

    return 0;
}
