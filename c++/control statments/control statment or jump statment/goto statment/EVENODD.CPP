#include<iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if(a%2==0){
        goto even;
    }else{
        goto odd;
    }
    even:
    cout << "The number is even.";
    odd:
    cout << "The number is odd.";
    return 0;
}