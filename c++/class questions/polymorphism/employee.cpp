#include<bits/stdc++.h>
using namespace std;
class employee{
    public:
    virtual void calsal()=0;
};
class semployee:public employee{
int annual;
public:
semployee(int a){
    annual=a;
}
void calsal(){
    cout<<"(salaried employee)Monthly sal is:"<<annual<<exit;
}
};
class hemployee:public employee{
    int hrs;
    int rate;
    public:
    hemployee(int h,int r){
        hrs=h;
        rate =r;
    }
    void calsal(){
        cout<<"(hourly emp)Monthly sal is:"<<rate*hrs<<endl;
    }
};
int main(){
    employee* ptr;
    hemployee hob(15,500);
    semployee sob(5000000);
    ptr=&hob;
    ptr->calsal();
    ptr=&sob;
    ptr->calsal();
}