#include<iostream>
#include<string>
using namespace std;
//structure define karna hoga
struct car{
    string  model;
    int year;

};//what is the key diffrence between structure and union ye to mai struct me v add kar ke nikal sakti thi
union carprice{
    int price;
};
int main(){
    car c;
    carprice p;
    cout<<"Enter car model: ";
    cin>>c.model;
    cout<<"enter year of manufacture: ";
    cin>>c.year;
    cout<<"enter price of car: ";
    cin>>p.price;
    cout<<"cars details";
    cout<<"car model is: "<<c.model<<endl;
    cout<<"year of manufacture is: "<<c.year<<endl;
    cout<<"price of car is: "<<p.price<<endl;
    
}