#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int distanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    int distance = 0;

    for (int num1 : arr1) {
        bool found = false;

        for (int num2 : arr2) {
            if (abs(num1 - num2) <= d) {
                found = true;
                break;
            }
        }

        if (!found) {
            distance++;
        }
    }

    return distance;
}

int main() {
    vector<int> arr1 = {4, 5, 8};
    vector<int> arr2 = {10, 9, 1, 8};
    int d = 2;

    int result = distanceValue(arr1, arr2, d);

    cout << "Distance value: " << result << endl;

    return 0;
}
