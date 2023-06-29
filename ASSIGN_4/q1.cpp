#include <iostream>
#include <vector>

using namespace std;

vector<int> findCommonElements(const vector<int>& arr1, const vector<int>& arr2, const vector<int>& arr3) {
    int ptr1 = 0, ptr2 = 0, ptr3 = 0;
    vector<int> result;

    while (ptr1 < arr1.size() && ptr2 < arr2.size() && ptr3 < arr3.size()) {
        if (arr1[ptr1] == arr2[ptr2] && arr1[ptr1] == arr3[ptr3]) {
            result.push_back(arr1[ptr1]);
            ptr1++;
            ptr2++;
            ptr3++;
        } else if (arr1[ptr1] <= arr2[ptr2] && arr1[ptr1] <= arr3[ptr3]) {
            ptr1++;
        } else if (arr2[ptr2] <= arr1[ptr1] && arr2[ptr2] <= arr3[ptr3]) {
            ptr2++;
        } else {
            ptr3++;
        }
    }

    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 5, 7, 9};
    vector<int> arr3 = {1, 3, 4, 5, 8};

    vector<int> result = findCommonElements(arr1, arr2, arr3);

    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
