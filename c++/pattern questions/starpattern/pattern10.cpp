#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int row = 1; row <= 2 * n; row++) {
        int totalSpaces = row > n ? n - (row - n) : row - 1;
        for (int spaces = 1; spaces <= totalSpaces; spaces++) {
            cout << "  ";  // Print spaces
        }
        int totalColumns = row > n ? row - n : n - row + 1;
        for (int column = 1; column <= totalColumns; column++) {
            cout << "*   ";  // Print asterisks with additional spaces for alignment
        }
        cout << endl;  // Move to the next line
    }

    return 0;
}
