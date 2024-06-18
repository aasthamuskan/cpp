#include<iostream>
using namespace std;
bool ispal(int n){
    int rev=0;
    int temp=0;
    while(temp!=0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
        }
        return(rev==n);
    }
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(ispal(n)){
        cout<<n<<" is a palindrome number.";
        }
        else{
            cout<<n<<" is not a palindrome number.";
            }
            return 0;
            
}