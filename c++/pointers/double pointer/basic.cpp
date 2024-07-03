#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *p=&i;
    int **p2 = &p;
    cout << endl<<endl<<"sab thik chal rha hai"<<endl<<endl;
    cout<<"printing p"<<p<<endl;
    cout<<"printing p2"<<p2<<endl;  
    cout<<"printing *p"<<*p<<endl;
    cout<<"printing **p2"<<**p2<<endl;
    cout<<"address of p"<<&p<<endl;
    return 0;

}