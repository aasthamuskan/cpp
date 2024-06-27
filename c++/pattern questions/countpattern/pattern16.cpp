#include <iostream>
using namespace std;

void pattern(int n) {
    // Procedure to print the required pattern
    int inSpaces = 2;
    int belowSpaces = 2 * n - 2;

    for (int row = 1; row <= 2 * n; row++) {
        int totalColumns = row > n ? row - n : n - row + 1;

        // Print leading stars
        for (int column = 1; column <= totalColumns; column++) {
            cout << "*";
        }

        // Print internal spaces
        if (row <= n && row != 1) {
            for (int spaces = 1; spaces <= inSpaces; spaces++) {
                cout << " ";
            }
            inSpaces += 2;
        } else if (row > n && row != 2 * n) {
            for (int spaces = 1; spaces <= belowSpaces; spaces++) {
                cout << " ";
            }
            belowSpaces -= 2;
        }

        // Print trailing stars
        for (int column = 1; column <= totalColumns; column++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    // Creating an input for taking inputs from the USER
    int n;
    cout << "Enter Number of ROWS for the Pattern: ";
    cin >> n;
    pattern(n);
    return 0;
}
