#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int carry = 1;
    for (int i = digits.size() - 1; i >= 0; i--) {
        digits[i] += carry;
        if (digits[i] < 10) {
            carry = 0;
            break;
        }
        digits[i] = 0;
    }
    if (carry == 1) {
        digits.insert(digits.begin(), 1);
    }
    return digits;
}

int main() {
    vector<int> digits = {1, 2, 3};
    vector<int> result = plusOne(digits);

    cout << "Output: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
