#include<iostream>
using namespace std;
//function signature
void printcount(int n){
    //function body
    for (int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    //function cell
    printcount(n);
    return 0;
}