#include<iostream>
using namespace std;
class human{
    private:
    int height;
    int age;

    public:
    int weight;

    int getage(){
        return this -> age;

    }
    void setweight(int w){
        this ->weight =w;

    }
};
class male: private huamn{
    public:
    string color;

    void sleep(){
        cout<<"male is sleping"<<endl;

    }
    int getheight(){
        return this-> height;
    
    }
};
int main(){
    male m1;
    cout<<m1.height<<endl;
    male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.color<<endl;
    object.setweight(84);
    cout<<object1.weight<<endl;
    object1.sleep();
    return 0;
}
