#include <iostream>

using namespace std;

int completeRows(int n)
{
    int k = 0;
    int total = 0;

    while (total <= n)
    {
        k++;
        total += k;
    }

    return k - 1;
}

int main()
{
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;

    int numCompleteRows = completeRows(n);
    cout << "Number of complete rows: " << numCompleteRows << endl;

    return 0;
}
