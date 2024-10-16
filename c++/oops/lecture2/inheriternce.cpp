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
    
        int getHeight() {
            return this->height;
        }

        void setHeight(int h) {
            this->height = h;
        }
};
class male: private human {
    public:
        string color;

        void sleep() {
            cout << "Male is sleeping" << endl;
        }

        // Access height using a public method
        int getHeightFromMale() {
            return getHeight();
        }

        // Access weight using a public method
        int getWeightFromMale() {
            return weight;
        }

        // Access age using a public method
        int getAgeFromMale() {
            return getAge();
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
