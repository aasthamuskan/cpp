#include<iostream>
using namespace std;

class book{
    int price; // typo: prince -> price
    int code;
public:
    void set(){ // added parentheses
        cout << "Enter the price: ";
        cin >> price;
        cout << "Enter the code: ";
        cin >> code;
    }

    void display(){ // added parentheses
        cout << "Price: " << price << ", Code: " << code << endl;
    }
};

int main(){
    book s[5]; // declare an array of book objects
    for(int i=0; i<5; i++){
        s[i].set();
    }
    for(int i=0; i<5; i++){
        s[i].display();
    }
    
    return 0; // added return statement
}