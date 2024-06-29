#include <iostream>
using namespace std;

void pattern(int n) {
    // Procedure to print the required pattern
    for (int row = 1; row <= n; row++) {
        // Trailing spaces
        for (int spaces = 1; spaces <= n - row; spaces++) {
            cout << " ";
        }

        int totalColumns = 2;
        if (row == 1 || row == n) {
            totalColumns = n - 1;
        }

        for (int column = 1; column <= totalColumns; column++) {
            cout << "*";
            if (row > 1 && row < n) {
                for (int spaces = 1; spaces <= n - 3; spaces++) {
                    cout << " ";
                }
            }
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
