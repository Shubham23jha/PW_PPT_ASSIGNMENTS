#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    
    // If all digits were 9, add an extra digit 1 at the beginning
    digits.insert(digits.begin(), 1);
    
    return digits;
}

int main() {
    vector<int> digits = {1, 2, 3};
    vector<int> result = plusOne(digits);

    // Output the resulting array of digits
    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}
