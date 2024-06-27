#include <iostream>
using namespace std;

void pattern(int n) {
    // Procedure to print the required pattern
    int inSpace = 2 * n - 1 - 4;

    for (int row = 1; row <= n; row++) {
        // Print leading spaces
        for (int spaces = 1; spaces <= row - 1; spaces++) {
            cout << " ";
        }
        
        int totalColumns = row != n ? 2 : 1;
        if (row == 1) {
            totalColumns = 2 * n - 1;
        }
        
        for (int column = 1; column <= totalColumns; column++) {
            cout << "*";
            if (row >= 2 && row != n) {
                for (int space = 1; space <= inSpace; space++) {
                    cout << " ";
                }
                inSpace -= 1;
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
