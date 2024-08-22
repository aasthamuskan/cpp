#include<iostream>
using namespace std;
class retangle{
    private:
    int length;
    int breath;
    public:
    void set(){
        length=7;
        breath=5;
    }
    void area(){
        int a=length*breath;
        cout<<"the area is "<<a;
    }

};
int main(){
    retangle r;
    r.set();
    r.area();
    return 0;
}