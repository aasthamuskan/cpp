 /*
        Pattern 5
          *
          * *
          * * *
          * *
          *
         */
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=0;i<2*n;i++ ){
       int totalColsInRow = i > n ? 2 * n - i : i ; 
       for(int j=0;j<totalColsInRow;j++){
        cout << "* ";
    }
    cout << endl;
}        
}
// line 16 explaination
// Condition: row > n

// This checks if the current row number (row) is greater than n.
// True Case: 2 * n - row

// If the condition row > n is true, then totalColsInRow is assigned the value of 2 * n - row.
// False Case: row

// If the condition row > n is false, then totalColsInRow is assigned the value of row.