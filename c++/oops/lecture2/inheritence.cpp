#include<iostream>
using namespace std;

class human {
    private:
        int height;
        int age;

    public:
        int weight;

        int getAge() {
            return this->age;
        }

        void setAge(int a) {
            this->age = a;
        }

        void setWeight(int w) {
            this->weight = w;
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

        int getHeightFromMale() {
            return getHeight();
        }

        int getWeightFromMale() {
            return weight;
        }

        int getAgeFromMale() {
            return getAge();
        }
};

int main() {
    male obj1;

    obj1.setWeight(84);  
    cout << "Weight: " << obj1.getWeightFromMale() << endl;

    obj1.setHeight(180);
    cout << "Height: " << obj1.getHeightFromMale() << endl;

    obj1.setAge(25);
    cout << "Age: " << obj1.getAgeFromMale() << endl;

    obj1.color = "Brown";
    cout << "Color: " << obj1.color << endl;

    obj1.sleep();

    return 0;
}
