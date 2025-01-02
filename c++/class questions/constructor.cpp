#include<iostream>
using namespace std;
class student{
protected:
int roll;
public:
student(int r){
    roll=r;
    cout<<"\nstudent const called: ";
}    
~student(){
    cout<<"\nstudent dest called";
}
void showroll(){
    cout<<"\nroll: "<<roll;
}
};
class result:public student{
    int marks;
    public:
    result(int r,int m):student(r){
        marks=m;
        cout<<"\nresult const called: ";
    }
~result(){
    cout<<"\nresult dest called: ";
}    
void showmarks(){
    cout<<"\nmarks: "<<marks;
}
};
int main(){
    result ob(1,100);
    ob.showroll();
    ob.showmarks();
}