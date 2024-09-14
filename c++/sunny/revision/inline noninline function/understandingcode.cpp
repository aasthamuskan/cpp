#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline int square(int x) {
    return x * x;
}

// Non-inline function to calculate the cube of a number
int cube(int x) {
    return x * x * x;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    // Inline function call
    cout << "Square of " << num << " using inline function: " << square(num) << "\n";
    
    // Non-inline function call
    cout << "Cube of " << num << " using non-inline function: " << cube(num) << "\n";

    return 0;
}
