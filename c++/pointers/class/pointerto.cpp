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
    rectangle r;
    rectangle *p=&r;
    (*p).display();
    p->set(5,4);
    return 0;
}