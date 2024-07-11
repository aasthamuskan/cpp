#include<iostream>
using namespace std;
class a{
    public:

    void func(){
        cout<<"I am aastha"<<endl;
    }
};
class b{
    public:

    void func(){
        cout<<"I am muskan"<<endl;
    }
};
class c: public a,public b{
//we copy all the functions of a and b here
};
int main(){
    c obj;
    obj.a::func();
    obj.b::func();
    return 0;
}