#include<iostream>
using namespace std;
//1=prime no
//0=not prime no
bool isprime(int n){
    for(int i=2;i<n;i++){
        //divide hogaya hai to prime no 
        if(n%i==0){
            return 0;
    }
}
return 1;

}




int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(isprime(n)){
        cout<<n<<" is a prime number";
        }
        else{
            cout<<n<<" is not a prime number"; 
            }
    return 0;
}