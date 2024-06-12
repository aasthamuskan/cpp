#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){    
        fact *= i;
        }
        return fact;
}
int ncr(int n,int r){
    int num = fact(n);
    int den = fact(r)*fact(n-r);
    int ans = num/den;
    return ans;


}
int main(){
    int n,r;
    cout << "Enter the value of n and r: ";
    cin >> n >> r;
    cout << "The value of nCr is: " << ncr(n,r);
    return 0;
    
}