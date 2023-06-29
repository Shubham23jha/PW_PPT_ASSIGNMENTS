#include <iostream>

using namespace std;

int arrangeCoins(int n) {
    int k = 0;
    int totalCoins = 0;

    while (totalCoins + k + 1 <= n) {
        k++;
        totalCoins += k;
    }

    return k;
}

int main() {
    int n = 5;

    int result = arrangeCoins(n);

    cout << result << endl; 

    return 0;
}
