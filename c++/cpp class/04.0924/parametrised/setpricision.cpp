#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   int a=2.345;
   cout<<setprecision(3)<<a;
    cout<<setprecision(3)<<(int)(a*100)/100.0<<a;
    int p=50,q=100;
    cout<<p<<q;
   return 0;

    
}