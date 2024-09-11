#include<iostream>
#include<string>
using namespace std;
class car{
    string brand;
    string model;
    string color;
    int year;
    public:
    car(string b,string m,string c,int y):brand(b),model(m),color(c),year(y){}
    void display()const{
        cout<<"brand name is"<<brand<<endl;
         cout<<"model name is"<<model<<endl;
          cout<<"color is"<<color<<endl;
           cout<<"year"<<year<<endl;

    }

};
int main(){
   string brand,model,color;
   int year;
   //car mycar;
   cout<<"enter brand name"<<endl;
   cin>>brand;
   cout<<"enter model name"<<endl;
   cin>>model;
   cout<<"color is: "<<endl;
   cin>>color;
   cout<<"year: "<<endl;
   cin>>year;
   car mycar(brand,model,color,year);
   mycar.display();
   return 0;
}