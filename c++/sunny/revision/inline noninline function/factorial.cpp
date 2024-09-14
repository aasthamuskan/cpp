#include<iostream>


using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n *factorial(n-1);
    }

}

int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    cout<<"factorial of the num is: "<<factorial(num)<<endl;
    return 0;
}