#include<iostream>
#include<iomanip>
using namespace std;
class employee{
    int eid;
    int sal;
    public:
    employee(int e,int s){
        eid=e;
        sal=s;
        cout<<"\nemp const called";
    }
    ~employee(){
        cout<<"\nemp dest called";
    }
    void show(){
        cout<<"\nemp details: "<<eid<<ends<<sal;
    }
};
class company{
    public:
    employee* emp;
    company(employee *e){
        cout<<"\ncompany const called";
        emp=e;
    }
    ~company(){
        cout<<"\ncompany dest called";
    }
    void show(){
        cout<<"\ncompany details: "<<emp<<endl;
    }
};
int main(){




return 0;
}