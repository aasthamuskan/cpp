#include<iostream>
using namespace std;
class test{
    int *data;
    public:
    test(){
        data = new int(5);
    }
    void diaplay(){
        cout<<"the value of data is"<<*data<<endl;
    }
    test(){
        data = new int(10);

    }
    void display(){
        cout<<"the value of data is"<<*data<<endl;
    }
    ~test(){
        cout<<"destructor called!";
        delete data;
    }
}