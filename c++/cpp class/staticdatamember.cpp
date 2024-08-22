#include<iostream>
using namespace std;
class item{
    int code;
    static int count;
    public:
    void set(){
        code=10;
    }
    void update(){
        code++;
        count++;
    }
    void display(){
        cout<<"the code is"<<code<<"the count is"<<count<<endl;

    }
};
int item::count;
int main(){
    item ob1,ob2,ob3;
    ob1.set();
    ob1.update();
    ob1.display();

    ob2.set();
    ob2.update();
    ob2.display();

    ob3.set();
    ob3.update();
    ob3.display();
}
