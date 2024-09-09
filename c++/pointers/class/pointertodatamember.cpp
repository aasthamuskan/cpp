#include<iostream>
using namespace std;
class rectangle{
    int l;
    int b;
    public:
    void set(int l,int b){
        this->l=l;
        this->b=b;
    }
    void display(){
        cout<<"the area is:"<<l*b;
    }
};
int main(){
    int test::*ptr=&test::x;
    test t;
    t.set();
    cout<<t.*ptr<<endl;
    test*p=&t;
    cout<<p->*ptr;
}