#include<bits/stdc++.h>
using namespace std;
class vehicle{
    protected:
    string model;
    int year;
};
class car:public vehicle{
protected:
int noofdonar;
public:

void getcardetail(){
    cout<<"enter the no of donar";
    cin>>noofdonar;
}
void showdetail(){
    cout<<"the car donar is\n";
    cout<<noofdonar;
}
};

class bike:public vehicle{
protected:
bool iskeekstart;
public:
 void getstart(){
    cout<<"isthebikeiskeekstart\n";
    cin>>iskeekstart;
 }
 void showstart(){
     cout<<"the bike is: ";
     cout<<iskeekstart;
 }
};

int main(){
    car c;
    bike b;
    c.getcardetail();
    b.getstart();
    c.showdetail();
    b.showstart();
}