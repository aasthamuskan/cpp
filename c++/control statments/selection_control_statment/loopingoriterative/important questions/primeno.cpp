#include<iostream>
using namespace std;

int main(){
    int i, count = 0, j;
    cout << "Enter a number: ";
    cin >> i;
    j = 1;

    while(j <= i){
        if(i % j == 0)
            count += 1;
        j++;
    }
    if(count == 2){
        cout << endl << "It's a prime number";
    }
    else{
        cout << endl << "Not a prime number";
    }
    return 0;
}