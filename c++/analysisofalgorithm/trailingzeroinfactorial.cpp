#include<iostream>
using namespace std;
int counttrailingzeros(int n){
    int res =0;
    for(int i=5;i<=n;i*5){
        res += n/i;
        }
        return res;
    }
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Number of trailing zeros in factorial of "<<n<<" is: "<<counttrailingzeros;
    return 0;
}