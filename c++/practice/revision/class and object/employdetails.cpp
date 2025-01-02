#include<iostream>
#include<string>
using namespace std;
class employee{
    string name ;
    int age;
    string address ;
    public:
    employee( string n,int g,string a): name(n),age(g),address(a){}
    void display() const{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout<< "Adress: "<<address<<endl;
    }
};
int main(){
    string name,address;
    int age;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"enter the age";
    cin>>age;
    cout<<"enter the adress";
    getline(cin,address);
    employee mys(name,address,age);
    mys.display();


}