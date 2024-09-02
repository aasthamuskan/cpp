#include<iostream>
using namespace std;
class Time{
    int h,m;
    public:
    void getdata(){
        cout<<"Enter hour: ";
        cin>>h;
        cout<<"enter min ";
        cin>>m;
        }
        void putdata(){
            cout<<"Time is "<<h<<":"<<m<<endl;
        }
        void sum(time t1,time t2){
            h=(t1.m+t2.m)/60;
            m=(t1.m+t2.m)%60;
            h=h(t1.h+t2.h);
        }
};
int main(){
    Time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.sum(t1,t2);
    return 0;
    }
