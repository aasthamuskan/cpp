#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int odd=1;
    for (int row = 1; row <= n; row++) {
        for (int spaces = 1; spaces <= row -1; spaces++) {
            cout << "  ";  // Print spaces
        }
        for (int column = 1; column <= 2*n-odd; column++) {
            cout << "* ";  // Print asterisks
        }
        odd+=2;
        cout << endl;  // Move to the next line
    }

    return 0;
}
