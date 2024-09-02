#include<iostream>
using namespace std;
class fact{
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
};
int main(){
    int n;
    cin>>n;
    int ans= factorial(n);
    cout<<ans<<endl;
    return 0;
}