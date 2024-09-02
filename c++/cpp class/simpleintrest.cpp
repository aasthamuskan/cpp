#include<iostream>
using namespace std;
void si(int p,int r=5,int t=1){
    int intrest=(p*r*t)/100;
    cout<<intrest<<endl;
}
int main(){
    si(8000);
    return 0;

}