#include<iostream>
using namespace  std;
int countdigit(int x)
    {int res=0;
    while(x>0)
    {
        x/=10;
        res++;

    }
return res;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Number of digits in the number is: "<<countdigit(n);
    return 0;
}