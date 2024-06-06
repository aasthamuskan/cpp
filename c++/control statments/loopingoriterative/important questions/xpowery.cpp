#include<iostream>
using namespace std;
int main() {
   int x,y,i,prd=1;
   cout << "Enter two numbers: ";
   cin >> x >> y;
   while(y>0){
    prd*=x;
    y--;

}
cout<<"final value="<<prd;
return 0;
}
