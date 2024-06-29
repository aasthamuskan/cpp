#include <iostream>
using namespace std;

void pattern(int n) {
    // Procedure to print the required pattern
    for (int row = 1; row <= n; row++) {
        for (int column = 1; column <= row; column++) {
            if ((row + column) % 2 == 0)
                cout << 0 << " ";
            else
                cout << 1 << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter Number of ROWS for the Pattern: ";
    cin >> n;
    pattern(n);
    return 0;
}
