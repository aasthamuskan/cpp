#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){//odd
        return 0;
    }
    else{//even
        return 1;
        }
}
int main(){
    int  num;
    cout << "Enter a number: ";
    cin >> num;
    if(isEven(num)){
        cout << "The number is even.";
        }
        else{
            cout << "The number is odd.";
            }
            return 0;
            }
