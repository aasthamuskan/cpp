#include<iostream>
using namespace std;
void saydigits(int n, string arr[]){
    //base case
    if(n==0){
        return ;
    }
    //recursive case
    int digit = n%10;
    n/=10;
    saydigits(n,arr);
    cout<<arr[digit]<<" ";

}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    saydigits(n,arr);
    return 0;

    }
