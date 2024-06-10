#include<iostream>
using namespace std;
int main() {
    int n,j;
    cin >> n;
    int i=n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;}
}