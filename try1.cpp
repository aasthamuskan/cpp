#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int nthPrime(int n) {
    int count = 0;
    int num = 2;
    while (true) {
        if (isPrime(num)) {
            count++;
            if (count == n) return num;
        }
        num++;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int nth_prime = nthPrime(n);
    cout << "The " << n << "th prime number is: " << nth_prime << endl;

    return 0;
}
