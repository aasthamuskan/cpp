#include <iostream>
using namespace std;

// Overloaded function to add two integers
int add(int a, int b) {
    cin>>a;
    cin>>b;
    return a + b;
}

// Overloaded function to add two floating-point numbers
float add(float a, float b) {
    cin>>a;
    cin>>b;
    return a + b;
}

int main() {
    int intResult = add(3, 4);         // Calls the integer version of add
    float floatResult = add(3.5f, 2.5f);  // Calls the float version of add

    cout << "Sum of integers: " << intResult << endl;
    cout << "Sum of floats: " << floatResult << endl;

    return 0;
}

