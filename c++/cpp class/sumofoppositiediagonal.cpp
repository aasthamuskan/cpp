#include <iostream>
#include <vector>

using namespace std;

int main() {
    int SIZE = 3; // Matrix size
    vector<vector<int>> A(SIZE, vector<int>(SIZE));

    // Input elements in matrix from user
    cout << "Enter elements in matrix of size " << SIZE << "x" << SIZE << ": \n";
    for(auto& row : A) {
        for(auto& elem : row) {
            cin >> elem;
        }
    }

    // Find sum of minor diagonal elements
    int sum = 0;
    for(int i=0; i<SIZE; i++) {
        sum += A[i][SIZE-i-1];
    }

    cout << "\nSum of minor diagonal elements = " << sum << endl;

    return 0;
}