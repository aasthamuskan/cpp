#include<iostream>
using namespace std;

int main(){
    int i,j;
    cout << "Enter a number: ";
    cin >> i;
    j=1;
    while(j<=10){
        cout <<endl<<i*j;
        j+=1;
    }
    return 0;
}