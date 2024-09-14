#include<iostream>
using namespace std;
class factorial{
    public:
    int fact(int n){
        if(n<=1){
            return 1;
        }else{
            return n*fact(n-1);
        }
    }
};
int main(){
    factorial f;
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int result=f.fact(number);
    cout<<"factorial of "<<number<<" is: "<<result<<endl;
}