#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=0;i<2*n;i++ ){
       int totalColsInRow = i > n ? 2 * n - i : i ; 
       for(int j=0;j<totalColsInRow;j++){
        cout << j+1<<" ";
    }
    cout << endl;
}        
}