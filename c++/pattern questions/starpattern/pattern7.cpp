#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int spaces = 1; spaces <= n - row; spaces++) {
            cout << "  ";  // Print spaces
        }
        for (int column = 1; column <= row; column++) {
            cout << "* ";  // Print asterisks
        }
        cout << endl;  // Move to the next line
    }

    return 0;
}
