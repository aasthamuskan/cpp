#inlcude<iostream>
using namespace std;
void sum(int a,int b){
    cout<<a+b<<endl;
    cout<<"hi";
}
void sum(double a,double b){
    cout<< a+b<<endl;
    cout<<"hello";
}
void sum(double a,double b,double c){
    cout<< a+b+c<<endl;
}
int main(){
    sum(2,4);
    sum(2.0,4.0);
    sum(5.6,4.6,3.0);
}
