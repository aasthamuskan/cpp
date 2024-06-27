#include <iostream>
using namespace std;

void pattern(int n) {
    // Procedure to print the required pattern
    int inSpace = 1;
    int inBelowSpace = 2 * n - 5;

    for (int row = 1; row <= 2 * n - 1; row++) {
        int totalColumns = 1;
        if (row != 1 && row != 2 * n - 1)
            totalColumns = 2;

        int totalSpaces = row > n ? row - n : n - row;
        for (int space = 1; space <= totalSpaces; space++) {
            cout << " ";
        }

        for (int column = 1; column <= totalColumns; column++) {
            cout << "*";
            if (row > 1 && row <= n) {
                for (int space = 1; space <= inSpace; space++) {
                    cout << " ";
                }
                inSpace += 1;
            }
            if (row > n) {
                for (int space = 1; space <= inBelowSpace; space++) {
                    cout << " ";
                }
                inBelowSpace--;
            }
        }
        cout << endl;
    }
}

int main() {
    // Creating an input for taking inputs from the USER
    int n;
    // Take the number of ROWS from the USER
    cout << "Enter Number of ROWS for the Pattern: ";
    cin >> n;
    pattern(n);
    return 0;
}
